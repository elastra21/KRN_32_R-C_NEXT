// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: KRN_lvgl

#ifndef _KRN_LVGL_UI_H
#define _KRN_LVGL_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

void rotate_update_Animation( lv_obj_t *TargetObject, int delay);
extern lv_obj_t *ui_Splash;
extern lv_obj_t *ui_Splash_Image1;
extern lv_obj_t *ui_bootStatus;
extern lv_obj_t *ui_Splash_Label3;
extern lv_obj_t *ui_Splash_Spinner1;
extern lv_obj_t *ui_home;
extern lv_obj_t *ui_beername;
extern lv_obj_t *ui_beerstyle;
extern lv_obj_t *ui_Screen1_Image2;
extern lv_obj_t *ui_Screen1_Label1;
extern lv_obj_t *ui_Screen1_Label3;
extern lv_obj_t *ui_Screen1_Panel1;
void ui_event_Screen1_Button2( lv_event_t * e);
extern lv_obj_t *ui_Screen1_Button2;
extern lv_obj_t *ui_Screen1_Bar2;
extern lv_obj_t *ui_Screen1_Label2;
extern lv_obj_t *ui_Screen1_Arc1;
extern lv_obj_t *ui_configuration;
void ui_event_BackBtn( lv_event_t * e);
extern lv_obj_t *ui_BackBtn;
extern lv_obj_t *ui_ConfigTitle;
extern lv_obj_t *ui_ConfigOptionsPanel;
void ui_event_CalibrateBtn( lv_event_t * e);
extern lv_obj_t *ui_CalibrateBtn;
extern lv_obj_t *ui_calibrateLbl;
void ui_event_UpdateBtn( lv_event_t * e);
extern lv_obj_t *ui_UpdateBtn;
extern lv_obj_t *ui_updateLbl;
void ui_event_RebootBtn( lv_event_t * e);
extern lv_obj_t *ui_RebootBtn;
extern lv_obj_t *ui_reiniciarLbl;
extern lv_obj_t *ui_Calibrate;
extern lv_obj_t *ui_CalibrateTitle;
extern lv_obj_t *ui_Calibrate_Label4;
extern lv_obj_t *ui_ConfigHelpBtn;
extern lv_obj_t *ui_Screen1_Label5;
extern lv_obj_t *ui_Screen1_Label4;
extern lv_obj_t *ui_QtyValue;
extern lv_obj_t *ui_QtySuffix;
void ui_event_CalibrateListoBtn( lv_event_t * e);
extern lv_obj_t *ui_CalibrateListoBtn;
extern lv_obj_t *ui_Calibrate_Label3;
void ui_event_Update( lv_event_t * e);
extern lv_obj_t *ui_Update;
extern lv_obj_t *ui_UpdateTitle;
extern lv_obj_t *ui_Calibrate_Label1;
extern lv_obj_t *ui_ConfigHelpBtn1;
extern lv_obj_t *ui_Screen1_Label6;
extern lv_obj_t *ui_Screen1_Label7;
void ui_event_CalibrateListoBtn1( lv_event_t * e);
extern lv_obj_t *ui_CalibrateListoBtn1;
extern lv_obj_t *ui_Calibrate_Label2;
extern lv_obj_t *ui_Update_Image1;

void reboot(lv_event_t * e);
void cablibrationResults(lv_event_t * e);

LV_IMG_DECLARE( ui_img_logo_png);   // assets/logo.png
LV_IMG_DECLARE( ui_img_nfc_black_bg_png);   // assets/nfc_black_bg.png
LV_IMG_DECLARE( ui_img_320698225);   // assets/back-white-4.png
LV_IMG_DECLARE( ui_img_2113667733);   // assets/information (1).png
LV_IMG_DECLARE( ui_img_refresh_nobg1_png);   // assets/refresh_nobg1.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
