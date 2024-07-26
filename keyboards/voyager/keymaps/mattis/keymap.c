#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
    HSV_0_255_255,
    HSV_74_255_255,
    HSV_169_255_255,
};

enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
    DANCE_2,
    DANCE_3,
    DANCE_4,
    DANCE_5,
    DANCE_6,
    DANCE_7,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_voyager(KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, DE_SS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, DE_Z, KC_U, KC_I, KC_O, KC_P, DE_UE, KC_LEFT_CTRL, MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_S), MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), KC_G, KC_H, MT(MOD_RSFT, KC_J), MT(MOD_RCTL, KC_K), MT(MOD_RALT, KC_L), MT(MOD_RGUI, DE_OE), DE_AE, KC_LEFT_SHIFT, DE_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, DE_MINS, KC_MEH, KC_LEFT_GUI, LT(1, KC_SPACE), LT(2, KC_ENTER), MT(MOD_LALT, KC_BSPC)),
    [1] = LAYOUT_voyager(DE_CIRC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, DE_ACUT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DE_LBRC, DE_RBRC, DE_LCBR, DE_RCBR, KC_TRANSPARENT, DE_HASH, DE_PLUS, KC_F12, KC_TRANSPARENT, TD(DANCE_0), TD(DANCE_1), TD(DANCE_2), TD(DANCE_3), DE_PERC, DE_AMPR, TD(DANCE_4), TD(DANCE_5), TD(DANCE_6), TD(DANCE_7), DE_QST, KC_TRANSPARENT, DE_LESS, DE_MORE, DE_PIPE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [2] = LAYOUT_voyager(RGB_TOG, TOGGLE_LAYER_COLOR, RGB_MODE_FORWARD, RGB_SLD, RGB_VAD, RGB_VAI, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(3), KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_AUDIO_MUTE, KC_TRANSPARENT, KC_PAGE_UP, KC_HOME, KC_TRANSPARENT, KC_END, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_MEDIA_STOP, KC_MEDIA_PLAY_PAUSE, KC_TRANSPARENT, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255, HSV_74_255_255, HSV_169_255_255, KC_PGDN, LCTL(LSFT(KC_TAB)), LCTL(KC_TAB), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [3] = LAYOUT_voyager(KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, DE_SS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, DE_Z, KC_U, KC_I, KC_O, KC_P, DE_UE, KC_LEFT_CTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, DE_OE, DE_AE, KC_LEFT_SHIFT, DE_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, DE_MINS, KC_MEH, KC_LEFT_GUI, KC_SPACE, LT(4, KC_ENTER), KC_BSPC),
    [4] = LAYOUT_voyager(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {{188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}, {188, 255, 255}},

    [1] = {{41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}},

    [2] = {{74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}},

    [3] = {{0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    if (rawhid_state.rgb_control) {
        return false;
    }
    if (keyboard_config.disable_layer_led) {
        return false;
    }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
        case HSV_0_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(0, 255, 255);
            }
            return false;
        case HSV_74_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(74, 255, 255);
            }
            return false;
        case HSV_169_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(169, 255, 255);
            }
            return false;
    }
    return true;
}

typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };

static tap dance_state[8];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_EXLM);
        tap_code16(KC_EXLM);
        tap_code16(KC_EXLM);
    }
    if (state->count > 3) {
        tap_code16(KC_EXLM);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            register_code16(KC_EXLM);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LEFT_GUI);
            break;
        case DOUBLE_TAP:
            register_code16(KC_EXLM);
            register_code16(KC_EXLM);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_EXLM);
            register_code16(KC_EXLM);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            unregister_code16(KC_EXLM);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LEFT_GUI);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_EXLM);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_EXLM);
            break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(DE_DQOT);
        tap_code16(DE_DQOT);
        tap_code16(DE_DQOT);
    }
    if (state->count > 3) {
        tap_code16(DE_DQOT);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            register_code16(DE_DQOT);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LEFT_ALT);
            break;
        case DOUBLE_TAP:
            register_code16(DE_DQOT);
            register_code16(DE_DQOT);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(DE_DQOT);
            register_code16(DE_DQOT);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            unregister_code16(DE_DQOT);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LEFT_ALT);
            break;
        case DOUBLE_TAP:
            unregister_code16(DE_DQOT);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(DE_DQOT);
            break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(DE_PARA);
        tap_code16(DE_PARA);
        tap_code16(DE_PARA);
    }
    if (state->count > 3) {
        tap_code16(DE_PARA);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP:
            register_code16(DE_PARA);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LEFT_CTRL);
            break;
        case DOUBLE_TAP:
            register_code16(DE_PARA);
            register_code16(DE_PARA);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(DE_PARA);
            register_code16(DE_PARA);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP:
            unregister_code16(DE_PARA);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LEFT_CTRL);
            break;
        case DOUBLE_TAP:
            unregister_code16(DE_PARA);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(DE_PARA);
            break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(DE_DLR);
        tap_code16(DE_DLR);
        tap_code16(DE_DLR);
    }
    if (state->count > 3) {
        tap_code16(DE_DLR);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP:
            register_code16(DE_DLR);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LEFT_SHIFT);
            break;
        case DOUBLE_TAP:
            register_code16(DE_DLR);
            register_code16(DE_DLR);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(DE_DLR);
            register_code16(DE_DLR);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP:
            unregister_code16(DE_DLR);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LEFT_SHIFT);
            break;
        case DOUBLE_TAP:
            unregister_code16(DE_DLR);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(DE_DLR);
            break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(DE_SLSH);
        tap_code16(DE_SLSH);
        tap_code16(DE_SLSH);
    }
    if (state->count > 3) {
        tap_code16(DE_SLSH);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP:
            register_code16(DE_SLSH);
            break;
        case SINGLE_HOLD:
            register_code16(KC_RIGHT_SHIFT);
            break;
        case DOUBLE_TAP:
            register_code16(DE_SLSH);
            register_code16(DE_SLSH);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(DE_SLSH);
            register_code16(DE_SLSH);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP:
            unregister_code16(DE_SLSH);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_RIGHT_SHIFT);
            break;
        case DOUBLE_TAP:
            unregister_code16(DE_SLSH);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(DE_SLSH);
            break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(DE_LPRN);
        tap_code16(DE_LPRN);
        tap_code16(DE_LPRN);
    }
    if (state->count > 3) {
        tap_code16(DE_LPRN);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP:
            register_code16(DE_LPRN);
            break;
        case SINGLE_HOLD:
            register_code16(KC_RIGHT_CTRL);
            break;
        case DOUBLE_TAP:
            register_code16(DE_LPRN);
            register_code16(DE_LPRN);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(DE_LPRN);
            register_code16(DE_LPRN);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP:
            unregister_code16(DE_LPRN);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_RIGHT_CTRL);
            break;
        case DOUBLE_TAP:
            unregister_code16(DE_LPRN);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(DE_LPRN);
            break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(DE_RPRN);
        tap_code16(DE_RPRN);
        tap_code16(DE_RPRN);
    }
    if (state->count > 3) {
        tap_code16(DE_RPRN);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP:
            register_code16(DE_RPRN);
            break;
        case SINGLE_HOLD:
            register_code16(KC_RIGHT_ALT);
            break;
        case DOUBLE_TAP:
            register_code16(DE_RPRN);
            register_code16(DE_RPRN);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(DE_RPRN);
            register_code16(DE_RPRN);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP:
            unregister_code16(DE_RPRN);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_RIGHT_ALT);
            break;
        case DOUBLE_TAP:
            unregister_code16(DE_RPRN);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(DE_RPRN);
            break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(DE_EQL);
        tap_code16(DE_EQL);
        tap_code16(DE_EQL);
    }
    if (state->count > 3) {
        tap_code16(DE_EQL);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP:
            register_code16(DE_EQL);
            break;
        case SINGLE_HOLD:
            register_code16(KC_RIGHT_GUI);
            break;
        case DOUBLE_TAP:
            register_code16(DE_EQL);
            register_code16(DE_EQL);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(DE_EQL);
            register_code16(DE_EQL);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP:
            unregister_code16(DE_EQL);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_RIGHT_GUI);
            break;
        case DOUBLE_TAP:
            unregister_code16(DE_EQL);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(DE_EQL);
            break;
    }
    dance_state[7].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset), [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset), [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset), [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset), [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset), [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset), [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset), [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
};
