#include <stdlib.h>
#include <math.h>
#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/clocks.h"
#include "util/matrizLedControl.h"
#include "util/drawing.h"

#define LED_RGB_RED_PIN 13   
#define LED_RGB_GREEN_PIN 11 
#define LED_RGB_BLUE_PIN 12  
#define BUTTON_A_PIN 5
#define BUTTON_B_PIN 6

int current_animation = 0;
int total_animations = 11; 

// Função para exibir a mensagem do menu
void menu_message()
{
    printf("\nMatrix Led Menu:\n");
    printf("1");
    printf("2");
    printf("3");
    printf("5");
    printf("6");
    printf("7");
    printf("8");
    printf("9");
    printf("ok");
    printf("Pressione A para avançar para a próximo número.\n");
    printf("Pressione B para retornar ao número anterior.\n");
}

// Função para limpar os LEDs
void clean_leds()
{
    npClear();
    npWrite();
}

// Função para ajustar a intensidade dos LEDs para 10%
uint32_t dim_color(uint32_t color)
{
    // Desmonta as cores RGB
    uint8_t r = (color >> 16) & 0xFF;
    uint8_t g = (color >> 8) & 0xFF;
    uint8_t b = color & 0xFF;

    // Aplica 10% de intensidade (multiplicando por 0.1)
    r = (uint8_t)(r * 0.05);
    g = (uint8_t)(g * 0.05);
    b = (uint8_t)(b * 0.05);

    // Recombina as cores com a intensidade reduzida
    return (r << 16) | (g << 8) | b;
}

// Função para iniciar a animação com base no índice
void start_current_animation() {
    switch (current_animation)
    {
        case 0:
            printf("número 0");
            startAnimation(num_0);
            break;
        case 1:
            printf("número 1");
            startAnimation(num_1);
            break;
        case 2:
            printf("número 2");
            startAnimation(num_2);
            break;
        case 3:
            printf("número 3");
            startAnimation(num_3);
            break;
        case 4:
            printf("número 4");
            startAnimation(num_4);
            break;
        case 5:
            printf("número 5");
            startAnimation(num_5);
            break;
        case 6:
            printf("número 6");
            startAnimation(num_6);
            break;
        case 7:
            printf("número 7");
            startAnimation(num_7);
            break;
        case 8:
            printf("número 8");
            startAnimation(num_8);
            break;
        case 9:
            printf("número 9");
            startAnimation(num_9);
            break;
        case 10:
            printf("ok");
            startAnimation(ok);
            break;
        default:
            break;
    }
}

// Função para verificar o estado do botão e mudar a animação
void update_animation()
{
    if (gpio_get(BUTTON_A_PIN) == 0) // Botão A pressionado
    {
        current_animation = (current_animation + 1) % total_animations; // Avança para a próxima animação
        printf("Próxima animação: %d\n", current_animation + 1);
        start_current_animation();
        sleep_ms(500); // Debounce para evitar múltiplos acionamentos
    }
    else if (gpio_get(BUTTON_B_PIN) == 0) // Botão B pressionado
    {
        current_animation = (current_animation - 1 + total_animations) % total_animations; // Retrocede para animação anterior
        printf("Animação anterior: %d\n", current_animation + 1);
        start_current_animation();
        sleep_ms(500); // Debounce para evitar múltiplos acionamentos
    }
}

// Função para piscar o LED RGB vermelho a 5Hz
void blink_led_rgb() {
    static bool led_state = false;
    static uint32_t last_blink_time = 0;
    uint32_t now = to_ms_since_boot(get_absolute_time());

    if (now - last_blink_time >= 200) {  // 200ms = 5Hz
        led_state = !led_state;

        // Controla o LED vermelho: pisca entre ligado e desligado
        gpio_put(LED_RGB_RED_PIN, led_state ? 1 : 0);  // Pisca o LED vermelho

        // Atualiza o tempo do último piscar
        last_blink_time = now;
    }
}

int main()
{
    // Inicializa entradas e saídas.
    stdio_init_all();
    printf("Init: ALL\n");

    // Inicializa a matriz de LEDs NeoPixel.
    npInit();
    printf("Init: LEDS\n");
    npClear();

    // Configura os pinos dos botões A e B
    gpio_init(BUTTON_A_PIN);
    gpio_init(BUTTON_B_PIN);
    gpio_set_dir(BUTTON_A_PIN, GPIO_IN);
    gpio_set_dir(BUTTON_B_PIN, GPIO_IN);
    gpio_pull_up(BUTTON_A_PIN);  // Ativa o resistor de pull-up interno
    gpio_pull_up(BUTTON_B_PIN);  // Ativa o resistor de pull-up interno

    // Configura os pinos do LED RGB
    gpio_init(LED_RGB_RED_PIN);  // Pino vermelho
    gpio_init(LED_RGB_GREEN_PIN);  // Pino verde (se necessário)
    gpio_init(LED_RGB_BLUE_PIN);   // Pino azul (se necessário)
    gpio_set_dir(LED_RGB_RED_PIN, GPIO_OUT);
    gpio_set_dir(LED_RGB_GREEN_PIN, GPIO_OUT);
    gpio_set_dir(LED_RGB_BLUE_PIN, GPIO_OUT);

    // Exibe o menu
    menu_message();
    // Inicia a primeira animação
    start_current_animation();

    // Loop principal
    while (true)
    {
        update_animation(); // Verifica o estado dos botões e atualiza a animação

        // Chama a função para piscar o LED vermelho
        blink_led_rgb();

        // Aguarda um curto período para não sobrecarregar o processador
        sleep_ms(100);
    }

    return 0;
}
