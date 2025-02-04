#ifndef DRAWING_H
#define DRAWING_H

#include <stdint.h>
#include "ledStruct.h" // Possible problem

// Export the variables of basic drawing
extern const npLED_t draw_type_B[25]; // Basic blue drawing
extern const npLED_t draw_type_C[25]; // Basic red drawing
extern const npLED_t draw_type_D[25]; // Basic Green drawing
extern const npLED_t draw_type_TAG[25]; // Basic white drawing

// Export the variables of animations
extern const npLED_t animation_type0[5][25]; // Emerson Nocais Oliveira - AnimationArray
extern const npLED_t animation_type1[5][25]; // Ian Antunes - AnimationArray
extern const npLED_t animation_type2[5][25]; // Matheus Vinicius - AnimationArray
extern const npLED_t animation_type3[13][25]; // Samuel Canario - AnimationArray
extern const npLED_t animation_type4[5][25]; // Rayane Queiroz - AnimationArray
extern const npLED_t animation_type5[5][25]; // Rayane Queiroz - AnimationArray
extern const npLED_t animation_type6[5][25]; // Rayane Queiroz - AnimationArray
extern const npLED_t animation_type7[5][25]; // Rayane Queiroz - AnimationArray
extern const npLED_t animation_type8[5][25]; // Rayane Queiroz - AnimationArray
extern const npLED_t animation_type9[6][25]; // Taris Henrique - AnimationArray

#endif