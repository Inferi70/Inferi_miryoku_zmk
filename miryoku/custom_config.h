// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_CLIPBOARD_WIN

#define MIRYOKU_LAYER_GAME \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SEMI,          \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp FSLH,          \
U_NP,              U_NP,              &kp LALT,          &kp LCTRL,         &kp SPACE,         &kp RET,           &mo 1,             &mo 2,             U_NP,              U_NP

#if defined (KEYBOARD_CRKBD)

#define XXX &none

#define MIRYOKU_LAYERMAPPING_BASE(\
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB    K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp BSPC \
&kp LSHFT  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp SQT  \
&kp LCTRL  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp ESC  \
                     K32  K33  K34       K35  K36  K37

#endif
