#include <stdint.h>
#include "ledStruct.h"
#include "drawing.h"
#include "definitions.h"

// B) Blue Drawing. with 100%
const npLED_t draw_type_B[25] = {
    {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}};

// C) Red Drawing. with 80%
const npLED_t draw_type_C[25] = {
    {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}};

// D) Green Drawing. with 50%
const npLED_t draw_type_D[LED_COUNT] = {
    {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}, {0, 127, 0}};

// D) White Drawing. with 20%
const npLED_t draw_type_TAG[LED_COUNT] = {
    {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}, {51, 51, 51}};

/**
 * Padrão da animação
 * Possui FRAMES = 5
 * cada um com LED_COUNT = 25
 * Cada elemento consiste em uma identificação RGB
 * Use este modelo para criar suas animações
 */

// Animação Emerson
const npLED_t animation_type0[FRAMES][LED_COUNT] = {
    {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}},
    {{212, 255, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {212, 255, 0}, {212, 255, 0}, {212, 255, 0}, {0, 0, 0}, {212, 255, 0}, {212, 255, 0}, {212, 255, 0}, {0, 0, 0}, {212, 255, 0}, {0, 0, 0}, {212, 255, 0}, {212, 255, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {212, 255, 0}, {212, 255, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {212, 255, 0}},
    {{0, 2, 255}, {0, 2, 255}, {0, 2, 255}, {0, 2, 255}, {0, 2, 255}, {0, 2, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 2, 255}, {0, 2, 255}, {0, 2, 255}, {0, 2, 255}, {0, 0, 0}, {0, 2, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 2, 255}, {0, 2, 255}, {0, 2, 255}, {0, 2, 255}, {0, 2, 255}},
    {{0, 255, 36}, {0, 255, 36}, {0, 255, 36}, {0, 255, 36}, {0, 255, 36}, {0, 255, 36}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 36}, {0, 255, 36}, {0, 255, 36}, {0, 255, 36}, {0, 255, 36}, {0, 0, 0}, {0, 255, 36}, {0, 0, 0}, {0, 0, 0}, {0, 255, 36}, {0, 0, 0}, {0, 255, 36}, {0, 0, 0}, {0, 0, 0}, {0, 255, 36}, {0, 255, 36}},
    {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}},
    {{255, 73, 0}, {255, 73, 0}, {255, 73, 0}, {255, 73, 0}, {255, 73, 0}, {255, 73, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 73, 0}, {255, 73, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 73, 0}, {255, 73, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 73, 0}, {255, 73, 0}, {255, 73, 0}, {255, 73, 0}, {255, 73, 0}, {255, 73, 0}},
    {{111, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {111, 0, 255}, {111, 0, 255}, {111, 0, 255}, {0, 0, 0}, {0, 0, 0}, {111, 0, 255}, {111, 0, 255}, {0, 0, 0}, {111, 0, 255}, {0, 0, 0}, {111, 0, 255}, {111, 0, 255}, {0, 0, 0}, {0, 0, 0}, {111, 0, 255}, {111, 0, 255}, {111, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {111, 0, 255}}};

const npLED_t animation_type1[FRAMES][LED_COUNT] = {
    {{255, 4, 4}, {255, 4, 4}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {255, 4, 4}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}},
    {{241, 245, 42}, {255, 4, 4}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {255, 4, 4}, {255, 4, 4}, {255, 4, 4}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {255, 4, 4}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}},
    {{241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {255, 4, 4}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {255, 4, 4}, {255, 4, 4}, {255, 4, 4}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {255, 4, 4}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}},
    {{241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {255, 4, 4}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {255, 4, 4}, {255, 4, 4}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {255, 4, 4}, {241, 245, 42}},
    {{241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}, {241, 245, 42}}};

const npLED_t animation_type2[FRAMES][LED_COUNT] = {
    {{4, 255, 4}, {4, 255, 4}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {4, 255, 4}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}},
    {{42, 245, 241}, {4, 255, 4}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {4, 255, 4}, {4, 255, 4}, {42, 245, 241}, {4, 255, 4}, {42, 245, 241}, {42, 245, 241}, {4, 255, 4}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}},
    {{42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {4, 255, 4}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {4, 255, 4}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {4, 255, 4}, {4, 255, 4}, {42, 245, 241}, {4, 255, 4}, {42, 245, 241}, {42, 245, 241}, {4, 255, 4}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}},
    {{42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {4, 255, 4}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {4, 255, 4}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {4, 255, 4}, {4, 255, 4}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {4, 255, 4}, {42, 245, 241}},
    {{42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {42, 245, 241}, {4, 255, 4}}};

const npLED_t animation_type3[FRAMES_CANARIO][LED_COUNT] = {
    {{0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}},
    {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}},
    {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {255, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}},
    {{255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 0, 0}, {0, 0, 0}, {0, 0, 0}}

};

const npLED_t animation_type5[FRAMES][LED_COUNT] = {
    {{16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {0, 0, 0}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {0, 0, 0}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {16, 11, 252}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}, {16, 11, 252}},
};
const npLED_t animation_type6[FRAMES][LED_COUNT] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {245, 14, 14}, {0, 0, 0}, {245, 14, 14}, {0, 0, 0}, {0, 0, 0}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {245, 14, 14}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {245, 14, 14}, {245, 14, 14}, {0, 0, 0}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {0, 0, 0}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {245, 14, 14}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {249, 4, 4}, {0, 0, 0}, {249, 4, 4}, {0, 0, 0}, {249, 4, 4}, {249, 4, 4}, {249, 4, 4}, {249, 4, 4}, {249, 4, 4}, {249, 4, 4}, {249, 4, 4}, {249, 4, 4}, {249, 4, 4}, {249, 4, 4}, {0, 0, 0}, {249, 4, 4}, {249, 4, 4}, {249, 4, 4}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {249, 4, 4}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {245, 14, 14}, {245, 14, 14}, {0, 0, 0}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {0, 0, 0}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {245, 14, 14}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {245, 14, 14}, {0, 0, 0}, {245, 14, 14}, {0, 0, 0}, {0, 0, 0}, {245, 14, 14}, {245, 14, 14}, {245, 14, 14}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {245, 14, 14}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
};
const npLED_t animation_type7[FRAMES][LED_COUNT] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 183, 7}, {16, 183, 7}, {16, 183, 7}, {0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 183, 7}},
    {{0, 0, 0}, {255, 38, 0}, {0, 0, 0}, {255, 38, 0}, {0, 0, 0}, {255, 38, 0}, {255, 38, 0}, {255, 38, 0}, {255, 38, 0}, {255, 38, 0}, {255, 38, 0}, {255, 38, 0}, {255, 38, 0}, {255, 38, 0}, {255, 38, 0}, {0, 0, 0}, {255, 38, 0}, {255, 38, 0}, {255, 38, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {255, 38, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {16, 183, 7}, {16, 183, 7}, {16, 183, 7}, {0, 0, 0}},
    {{0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {16, 183, 7}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {37, 249, 4}, {0, 0, 0}, {37, 249, 4}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {37, 249, 4}, {37, 249, 4}, {37, 249, 4}, {0, 0, 0}, {37, 249, 4}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {37, 249, 4}},
};
const npLED_t animation_type8[FRAMES][LED_COUNT] = {
    {{0, 0, 0}, {4, 20, 249}, {249, 4, 4}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {249, 105, 4}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {4, 249, 24}, {4, 20, 249}, {0, 0, 0}},
    {{0, 0, 0}, {4, 20, 249}, {249, 4, 4}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {0, 0, 0}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {0, 0, 0}, {4, 20, 249}, {0, 0, 0}},
    {{0, 0, 0}, {4, 20, 249}, {0, 0, 0}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {249, 105, 4}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {0, 0, 0}, {4, 20, 249}, {0, 0, 0}},
    {{0, 0, 0}, {4, 20, 249}, {0, 0, 0}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {0, 0, 0}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {4, 249, 24}, {4, 20, 249}, {0, 0, 0}},
    {{0, 0, 0}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {0, 0, 0}, {0, 0, 0}, {4, 20, 249}, {4, 249, 24}, {4, 20, 249}, {0, 0, 0}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {4, 20, 249}, {0, 0, 0}, {37, 249, 4}, {0, 0, 0}, {37, 249, 4}, {0, 0, 0}},
};
const npLED_t animation_type9[6][LED_COUNT] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}};
