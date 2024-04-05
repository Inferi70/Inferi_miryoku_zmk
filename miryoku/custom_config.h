// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#if defined (KEYBOARD_crkbd)

#define XXX &none

/ { \
     behaviors { \
                     m_td0: tap_dance_mod_tap_gaming_num1_2 { \
                     compatible = "zmk,behavior-tap-dance"; \
                     #binding-cells = <0>; \
                     tapping-term-ms = <225>; \
                     bindings = <&mt N1 Q>, <&kp N2>; \
                     }; \
             }; \
};

#define MIRYOKU_LAYER_GAME \
&kp TAB,        &kp Q, &kp W, &kp E, &kp R,   &kp Y, &kp U,  &kp I,     &kp O,   &kp P, \
&kp LSHFT,      &kp A, &kp S, &kp D, &kp F,   &kp H, &kp J,  &kp K,     &kp L,  &kp SEMI, \
&kp LCTRL,      &kp Z, &kp X, &kp C, &kp V,   &kp N, &kp M,  &kp COMMA, &kp DOT, &kp FSLH, \
U_NP,              U_NP,           &kp LALT, &kp LCTRL, &kp SPACE,   &kp RET, &mo 1, &mo 2, U_NP, U_NP

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp BSPC \
&kp LSHFT  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp SQT  \
&kp LCTRL  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp ESC \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_NAV( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  &u_to_U_GAME        K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14                 K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24                 K25  K26  K27  K28  K29  XXX \
               K32  K33  K34                 K35  K36  K37

#define MIRYOKU_LAYERMAPPING_GAME( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC &kp TAB  &m_td0 &kp W &mt N3 E &mt N4 R                 K05  K06  K07  K08  K09  &kp BSPC \
&kp G &kp LSHFT  &kp A &kp S &kp D &kp F                 K15  K16  K17  K18  K19  &kp SQT  \
%kp B &kp LCTRL  &kp Z &kp X &kp C &kp V                 K25  K26  K27  K28  K29  &kp ESC \
               &kp LALT &kp LCTRL &kp SPACE              K35  K36  K37

// #define MIRYOKU_LAYER_BASE \
// &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P, \
// U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),\
// U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
// U_NP,              U_NP,              U_LT(U_MEDIA, ESC), U_LT(U_NAV, TAB), U_LT(U_MOUSE, SPACE),     U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL), U_NP,              U_NP

// #define MIRYOKU_LAYER_NAV \
// U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      &u_to_U_GAME,       U_CPY,             U_PST,             &kp UP,            U_RDO,             U_UND,       \
// &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         U_CUT,        \
// U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,      \
// U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP



#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game")

// #define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GAME   10

#endif
