// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: KRN_lvgl

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void rotate_update_Animation( lv_obj_t *TargetObject, int delay);
lv_obj_t *ui_Splash;
lv_obj_t *ui_Splash_Image1;
lv_obj_t *ui_bootStatus;
lv_obj_t *ui_Splash_Label3;
lv_obj_t *ui_Splash_Spinner1;
lv_obj_t *ui_home;
lv_obj_t *ui_beername;
lv_obj_t *ui_beerstyle;
lv_obj_t *ui_Screen1_Image2;
lv_obj_t *ui_Screen1_Label1;
lv_obj_t *ui_Screen1_Label3;
lv_obj_t *ui_Screen1_Panel1;
void ui_event_Screen1_Button2( lv_event_t * e);
lv_obj_t *ui_Screen1_Button2;
lv_obj_t *ui_Screen1_Bar2;
lv_obj_t *ui_Screen1_Label2;
lv_obj_t *ui_Screen1_Arc1;
lv_obj_t *ui_configuration;
void ui_event_BackBtn( lv_event_t * e);
lv_obj_t *ui_BackBtn;
lv_obj_t *ui_ConfigTitle;
lv_obj_t *ui_ConfigOptionsPanel;
void ui_event_CalibrateBtn( lv_event_t * e);
lv_obj_t *ui_CalibrateBtn;
lv_obj_t *ui_calibrateLbl;
void ui_event_UpdateBtn( lv_event_t * e);
lv_obj_t *ui_UpdateBtn;
lv_obj_t *ui_updateLbl;
void ui_event_RebootBtn( lv_event_t * e);
lv_obj_t *ui_RebootBtn;
lv_obj_t *ui_reiniciarLbl;
lv_obj_t *ui_Calibrate;
lv_obj_t *ui_CalibrateTitle;
lv_obj_t *ui_Calibrate_Label4;
lv_obj_t *ui_ConfigHelpBtn;
lv_obj_t *ui_Screen1_Label5;
lv_obj_t *ui_Screen1_Label4;
lv_obj_t *ui_QtyValue;
lv_obj_t *ui_QtySuffix;
void ui_event_CalibrateListoBtn( lv_event_t * e);
lv_obj_t *ui_CalibrateListoBtn;
lv_obj_t *ui_Calibrate_Label3;
void ui_event_Update( lv_event_t * e);
lv_obj_t *ui_Update;
lv_obj_t *ui_UpdateTitle;
lv_obj_t *ui_Calibrate_Label1;
lv_obj_t *ui_ConfigHelpBtn1;
lv_obj_t *ui_Screen1_Label6;
lv_obj_t *ui_Screen1_Label7;
void ui_event_CalibrateListoBtn1( lv_event_t * e);
lv_obj_t *ui_CalibrateListoBtn1;
lv_obj_t *ui_Calibrate_Label2;
lv_obj_t *ui_Update_Image1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void rotate_update_Animation( lv_obj_t *TargetObject, int delay)
{
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 2000);
lv_anim_set_user_data(&PropertyAnimation_0,TargetObject);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle );
lv_anim_set_values(&PropertyAnimation_0, 0, 3600 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_in_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE );
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, true );
lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle );
lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1_Button2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_configuration, LV_SCR_LOAD_ANIM_OVER_TOP, 200, 0);
}
}
void ui_event_BackBtn( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_home, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 110, 0);
}
}
void ui_event_CalibrateBtn( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_Calibrate, LV_SCR_LOAD_ANIM_MOVE_LEFT, 180, 0);
}
}
void ui_event_UpdateBtn( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_Update, LV_SCR_LOAD_ANIM_MOVE_LEFT, 180, 0);
}
}
void ui_event_RebootBtn( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      reboot( e );
}
}
void ui_event_CalibrateListoBtn( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      cablibrationResults( e );
}
}
void ui_event_Update( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOADED) {
      rotate_update_Animation(ui_Update_Image1, 0);
}
}
void ui_event_CalibrateListoBtn1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_configuration, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 120, 0);
}
}

///////////////////// SCREENS ////////////////////
void ui_Splash_screen_init(void)
{
ui_Splash = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Splash, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Splash_Image1 = lv_img_create(ui_Splash);
lv_img_set_src(ui_Splash_Image1, &ui_img_logo_png);
lv_obj_set_width( ui_Splash_Image1, LV_SIZE_CONTENT);  /// 256
lv_obj_set_height( ui_Splash_Image1, LV_SIZE_CONTENT);   /// 148
lv_obj_set_x( ui_Splash_Image1, 0 );
lv_obj_set_y( ui_Splash_Image1, -35 );
lv_obj_set_align( ui_Splash_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Splash_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Splash_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_bootStatus = lv_label_create(ui_Splash);
lv_obj_set_width( ui_bootStatus, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_bootStatus, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_bootStatus, 0 );
lv_obj_set_y( ui_bootStatus, 143 );
lv_obj_set_align( ui_bootStatus, LV_ALIGN_CENTER );
lv_label_set_text(ui_bootStatus,"Conectando");
lv_obj_set_style_text_align(ui_bootStatus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_bootStatus, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Splash_Label3 = lv_label_create(ui_Splash);
lv_obj_set_width( ui_Splash_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Splash_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Splash_Label3, 0 );
lv_obj_set_y( ui_Splash_Label3, 165 );
lv_obj_set_align( ui_Splash_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Splash_Label3,"status");
lv_obj_set_style_text_color(ui_Splash_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Splash_Label3, 220, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Splash_Spinner1 = lv_spinner_create(ui_Splash,1000,90);
lv_obj_set_width( ui_Splash_Spinner1, 40);
lv_obj_set_height( ui_Splash_Spinner1, 40);
lv_obj_set_x( ui_Splash_Spinner1, 0 );
lv_obj_set_y( ui_Splash_Spinner1, 100 );
lv_obj_set_align( ui_Splash_Spinner1, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Splash_Spinner1, LV_OBJ_FLAG_CLICKABLE );    /// Flags
lv_obj_set_style_arc_width(ui_Splash_Spinner1, 5, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_arc_color(ui_Splash_Spinner1, lv_color_hex(0xFAB14C), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_Splash_Spinner1, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_Splash_Spinner1, 4, LV_PART_INDICATOR| LV_STATE_DEFAULT);

}
void ui_home_screen_init(void)
{
ui_home = lv_obj_create(NULL);
lv_obj_clear_flag( ui_home, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_beername = lv_label_create(ui_home);
lv_obj_set_width( ui_beername, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_beername, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_beername, 15 );
lv_obj_set_y( ui_beername, 14 );
lv_label_set_text(ui_beername,"Meta");
lv_obj_set_style_text_align(ui_beername, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_beername, &lv_font_montserrat_34, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_beerstyle = lv_label_create(ui_home);
lv_obj_set_width( ui_beerstyle, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_beerstyle, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_beerstyle, 18 );
lv_obj_set_y( ui_beerstyle, 51 );
lv_label_set_text(ui_beerstyle,"Belguim");
lv_obj_set_style_text_align(ui_beerstyle, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_beerstyle, &lv_font_montserrat_22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Image2 = lv_img_create(ui_home);
lv_img_set_src(ui_Screen1_Image2, &ui_img_nfc_black_bg_png);
lv_obj_set_width( ui_Screen1_Image2, LV_SIZE_CONTENT);  /// 240
lv_obj_set_height( ui_Screen1_Image2, LV_SIZE_CONTENT);   /// 240
lv_obj_set_x( ui_Screen1_Image2, -2 );
lv_obj_set_y( ui_Screen1_Image2, -4 );
lv_obj_set_align( ui_Screen1_Image2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Image2, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Screen1_Image2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Screen1_Label1 = lv_label_create(ui_home);
lv_obj_set_width( ui_Screen1_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label1, 21 );
lv_obj_set_y( ui_Screen1_Label1, 80 );
lv_label_set_text(ui_Screen1_Label1,"ABV 5.3%");
lv_obj_set_style_text_align(ui_Screen1_Label1, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen1_Label1, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Label3 = lv_label_create(ui_home);
lv_obj_set_width( ui_Screen1_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label3, 0 );
lv_obj_set_y( ui_Screen1_Label3, 146 );
lv_obj_set_align( ui_Screen1_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label3,"Acercar tarjeta");
lv_obj_set_style_text_color(ui_Screen1_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Screen1_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Screen1_Label3, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen1_Label3, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Panel1 = lv_obj_create(ui_home);
lv_obj_set_width( ui_Screen1_Panel1, 320);
lv_obj_set_height( ui_Screen1_Panel1, 68);
lv_obj_set_x( ui_Screen1_Panel1, 0 );
lv_obj_set_y( ui_Screen1_Panel1, 8 );
lv_obj_set_align( ui_Screen1_Panel1, LV_ALIGN_BOTTOM_LEFT );
lv_obj_clear_flag( ui_Screen1_Panel1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Screen1_Panel1, 15, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Screen1_Panel1, lv_color_hex(0xFAB14C), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1_Panel1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_blend_mode(ui_Screen1_Panel1, LV_BLEND_MODE_NORMAL, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Button2 = lv_btn_create(ui_Screen1_Panel1);
lv_obj_set_width( ui_Screen1_Button2, 44);
lv_obj_set_height( ui_Screen1_Button2, 44);
lv_obj_set_x( ui_Screen1_Button2, 123 );
lv_obj_set_y( ui_Screen1_Button2, -2 );
lv_obj_set_align( ui_Screen1_Button2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Screen1_Button2, 22, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Screen1_Button2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1_Button2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_Screen1_Button2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_Screen1_Button2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_Screen1_Button2, 20, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_Screen1_Button2, 1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Bar2 = lv_bar_create(ui_Screen1_Panel1);
lv_bar_set_value(ui_Screen1_Bar2,25,LV_ANIM_OFF);
lv_obj_set_width( ui_Screen1_Bar2, 168);
lv_obj_set_height( ui_Screen1_Bar2, 10);
lv_obj_set_x( ui_Screen1_Bar2, -38 );
lv_obj_set_y( ui_Screen1_Bar2, 7 );
lv_obj_set_align( ui_Screen1_Bar2, LV_ALIGN_CENTER );
lv_obj_set_style_bg_color(ui_Screen1_Bar2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1_Bar2, 100, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Screen1_Bar2, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1_Bar2, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

ui_Screen1_Label2 = lv_label_create(ui_Screen1_Panel1);
lv_obj_set_width( ui_Screen1_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label2, -82 );
lv_obj_set_y( ui_Screen1_Label2, -15 );
lv_obj_set_align( ui_Screen1_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label2,"Disponible");
lv_obj_set_style_text_color(ui_Screen1_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Screen1_Label2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Arc1 = lv_arc_create(ui_Screen1_Panel1);
lv_obj_set_width( ui_Screen1_Arc1, 44);
lv_obj_set_height( ui_Screen1_Arc1, 44);
lv_obj_set_x( ui_Screen1_Arc1, -126 );
lv_obj_set_y( ui_Screen1_Arc1, 213 );
lv_obj_set_align( ui_Screen1_Arc1, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Screen1_Arc1, LV_OBJ_FLAG_GESTURE_BUBBLE );    /// Flags
lv_arc_set_value(ui_Screen1_Arc1, 60);
lv_obj_set_style_arc_width(ui_Screen1_Arc1, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_arc_rounded(ui_Screen1_Arc1, true, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_arc_color(ui_Screen1_Arc1, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_Screen1_Arc1, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_Screen1_Arc1, 5, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_rounded(ui_Screen1_Arc1, true, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Screen1_Arc1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1_Arc1, 0, LV_PART_KNOB| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Screen1_Button2, ui_event_Screen1_Button2, LV_EVENT_ALL, NULL);

}
void ui_configuration_screen_init(void)
{
ui_configuration = lv_obj_create(NULL);
lv_obj_clear_flag( ui_configuration, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_BackBtn = lv_imgbtn_create(ui_configuration);
lv_imgbtn_set_src(ui_BackBtn, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_320698225, NULL);
lv_imgbtn_set_src(ui_BackBtn, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_320698225, NULL);
lv_obj_set_width( ui_BackBtn, 35);
lv_obj_set_height( ui_BackBtn, 35);
lv_obj_set_x( ui_BackBtn, 11 );
lv_obj_set_y( ui_BackBtn, 16 );

ui_ConfigTitle = lv_label_create(ui_configuration);
lv_obj_set_width( ui_ConfigTitle, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ConfigTitle, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ConfigTitle, 48 );
lv_obj_set_y( ui_ConfigTitle, 13 );
lv_label_set_text(ui_ConfigTitle,"Configuracion");
lv_obj_set_style_text_align(ui_ConfigTitle, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_ConfigTitle, &lv_font_montserrat_32, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ConfigOptionsPanel = lv_obj_create(ui_configuration);
lv_obj_set_width( ui_ConfigOptionsPanel, 320);
lv_obj_set_height( ui_ConfigOptionsPanel, 434);
lv_obj_set_x( ui_ConfigOptionsPanel, -1 );
lv_obj_set_y( ui_ConfigOptionsPanel, 20 );
lv_obj_set_align( ui_ConfigOptionsPanel, LV_ALIGN_BOTTOM_MID );
lv_obj_clear_flag( ui_ConfigOptionsPanel, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_ConfigOptionsPanel, 15, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_ConfigOptionsPanel, lv_color_hex(0xFAB14C), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ConfigOptionsPanel, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_CalibrateBtn = lv_btn_create(ui_ConfigOptionsPanel);
lv_obj_set_height( ui_CalibrateBtn, 53);
lv_obj_set_width( ui_CalibrateBtn, lv_pct(100));
lv_obj_set_x( ui_CalibrateBtn, 0 );
lv_obj_set_y( ui_CalibrateBtn, 10 );
lv_obj_add_flag( ui_CalibrateBtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_CalibrateBtn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_CalibrateBtn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_CalibrateBtn, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_CalibrateBtn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_CalibrateBtn, 150, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_CalibrateBtn, 1, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_CalibrateBtn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_calibrateLbl = lv_label_create(ui_CalibrateBtn);
lv_obj_set_width( ui_calibrateLbl, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_calibrateLbl, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_calibrateLbl, 0 );
lv_obj_set_y( ui_calibrateLbl, 4 );
lv_label_set_text(ui_calibrateLbl,"Calibrar");
lv_obj_set_style_text_font(ui_calibrateLbl, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_UpdateBtn = lv_btn_create(ui_ConfigOptionsPanel);
lv_obj_set_height( ui_UpdateBtn, 53);
lv_obj_set_width( ui_UpdateBtn, lv_pct(100));
lv_obj_set_x( ui_UpdateBtn, 0 );
lv_obj_set_y( ui_UpdateBtn, 69 );
lv_obj_add_flag( ui_UpdateBtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_UpdateBtn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_UpdateBtn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_UpdateBtn, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_UpdateBtn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_UpdateBtn, 150, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_UpdateBtn, 1, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_UpdateBtn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_updateLbl = lv_label_create(ui_UpdateBtn);
lv_obj_set_width( ui_updateLbl, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_updateLbl, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_updateLbl, 0 );
lv_obj_set_y( ui_updateLbl, 4 );
lv_label_set_text(ui_updateLbl,"Actualizar");
lv_obj_set_style_text_font(ui_updateLbl, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_RebootBtn = lv_btn_create(ui_ConfigOptionsPanel);
lv_obj_set_height( ui_RebootBtn, 53);
lv_obj_set_width( ui_RebootBtn, lv_pct(100));
lv_obj_set_x( ui_RebootBtn, 0 );
lv_obj_set_y( ui_RebootBtn, 131 );
lv_obj_add_flag( ui_RebootBtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_RebootBtn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_RebootBtn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_RebootBtn, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_RebootBtn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_RebootBtn, 150, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_RebootBtn, 1, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_RebootBtn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_reiniciarLbl = lv_label_create(ui_RebootBtn);
lv_obj_set_width( ui_reiniciarLbl, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_reiniciarLbl, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_reiniciarLbl, 0 );
lv_obj_set_y( ui_reiniciarLbl, 4 );
lv_label_set_text(ui_reiniciarLbl,"Reiniciar");
lv_obj_set_style_text_font(ui_reiniciarLbl, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_BackBtn, ui_event_BackBtn, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_CalibrateBtn, ui_event_CalibrateBtn, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_UpdateBtn, ui_event_UpdateBtn, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_RebootBtn, ui_event_RebootBtn, LV_EVENT_ALL, NULL);

}
void ui_Calibrate_screen_init(void)
{
ui_Calibrate = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Calibrate, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_CalibrateTitle = lv_label_create(ui_Calibrate);
lv_obj_set_width( ui_CalibrateTitle, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_CalibrateTitle, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_CalibrateTitle, 15 );
lv_obj_set_y( ui_CalibrateTitle, 13 );
lv_label_set_text(ui_CalibrateTitle,"Calibrar");
lv_obj_set_style_text_align(ui_CalibrateTitle, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_CalibrateTitle, &lv_font_montserrat_34, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Calibrate_Label4 = lv_label_create(ui_Calibrate);
lv_obj_set_width( ui_Calibrate_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Calibrate_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Calibrate_Label4, -26 );
lv_obj_set_y( ui_Calibrate_Label4, 55 );
lv_obj_set_align( ui_Calibrate_Label4, LV_ALIGN_TOP_RIGHT );
lv_label_set_text(ui_Calibrate_Label4,"help");
lv_obj_set_style_text_color(ui_Calibrate_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Calibrate_Label4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Calibrate_Label4, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ConfigHelpBtn = lv_imgbtn_create(ui_Calibrate);
lv_imgbtn_set_src(ui_ConfigHelpBtn, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_2113667733, NULL);
lv_imgbtn_set_src(ui_ConfigHelpBtn, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_2113667733, NULL);
lv_obj_set_width( ui_ConfigHelpBtn, 30);
lv_obj_set_height( ui_ConfigHelpBtn, 55);
lv_obj_set_x( ui_ConfigHelpBtn, 120 );
lv_obj_set_y( ui_ConfigHelpBtn, -193 );
lv_obj_set_align( ui_ConfigHelpBtn, LV_ALIGN_CENTER );

ui_Screen1_Label5 = lv_label_create(ui_Calibrate);
lv_obj_set_width( ui_Screen1_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label5, -53 );
lv_obj_set_y( ui_Screen1_Label5, 56 );
lv_obj_set_align( ui_Screen1_Label5, LV_ALIGN_TOP_MID );
lv_label_set_text(ui_Screen1_Label5,"Configuracion > Calibrar");
lv_obj_set_style_text_align(ui_Screen1_Label5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen1_Label5, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Label4 = lv_label_create(ui_Calibrate);
lv_obj_set_width( ui_Screen1_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label4, 0 );
lv_obj_set_y( ui_Screen1_Label4, 333 );
lv_obj_set_align( ui_Screen1_Label4, LV_ALIGN_TOP_MID );
lv_label_set_text(ui_Screen1_Label4,"Sirve 300ml y oprimir Listo");
lv_obj_set_style_text_align(ui_Screen1_Label4, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen1_Label4, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_QtyValue = lv_label_create(ui_Calibrate);
lv_obj_set_width( ui_QtyValue, 150);
lv_obj_set_height( ui_QtyValue, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_QtyValue, -72 );
lv_obj_set_y( ui_QtyValue, -15 );
lv_obj_set_align( ui_QtyValue, LV_ALIGN_CENTER );
lv_label_set_text(ui_QtyValue,"0");
lv_obj_set_style_text_align(ui_QtyValue, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_QtyValue, &lv_font_montserrat_40, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_QtySuffix = lv_label_create(ui_Calibrate);
lv_obj_set_width( ui_QtySuffix, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_QtySuffix, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_QtySuffix, 22 );
lv_obj_set_y( ui_QtySuffix, -10 );
lv_obj_set_align( ui_QtySuffix, LV_ALIGN_CENTER );
lv_label_set_text(ui_QtySuffix,"pul");
lv_obj_set_style_text_align(ui_QtySuffix, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_QtySuffix, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_CalibrateListoBtn = lv_btn_create(ui_Calibrate);
lv_obj_set_width( ui_CalibrateListoBtn, 288);
lv_obj_set_height( ui_CalibrateListoBtn, 55);
lv_obj_set_x( ui_CalibrateListoBtn, 0 );
lv_obj_set_y( ui_CalibrateListoBtn, -30 );
lv_obj_set_align( ui_CalibrateListoBtn, LV_ALIGN_BOTTOM_MID );
lv_obj_add_flag( ui_CalibrateListoBtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_CalibrateListoBtn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_CalibrateListoBtn, 15, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_CalibrateListoBtn, lv_color_hex(0xFAB14C), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_CalibrateListoBtn, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_CalibrateListoBtn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_CalibrateListoBtn, 120, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_CalibrateListoBtn, 20, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_CalibrateListoBtn, 1, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_ofs_x(ui_CalibrateListoBtn, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_ofs_y(ui_CalibrateListoBtn, 1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Calibrate_Label3 = lv_label_create(ui_CalibrateListoBtn);
lv_obj_set_width( ui_Calibrate_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Calibrate_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Calibrate_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Calibrate_Label3,"Listo");
lv_obj_set_style_text_font(ui_Calibrate_Label3, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_CalibrateListoBtn, ui_event_CalibrateListoBtn, LV_EVENT_ALL, NULL);

}
void ui_Update_screen_init(void)
{
ui_Update = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Update, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_UpdateTitle = lv_label_create(ui_Update);
lv_obj_set_width( ui_UpdateTitle, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_UpdateTitle, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_UpdateTitle, 15 );
lv_obj_set_y( ui_UpdateTitle, 13 );
lv_label_set_text(ui_UpdateTitle,"Actualizar");
lv_obj_set_style_text_align(ui_UpdateTitle, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_UpdateTitle, &lv_font_montserrat_34, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Calibrate_Label1 = lv_label_create(ui_Update);
lv_obj_set_width( ui_Calibrate_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Calibrate_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Calibrate_Label1, -26 );
lv_obj_set_y( ui_Calibrate_Label1, 55 );
lv_obj_set_align( ui_Calibrate_Label1, LV_ALIGN_TOP_RIGHT );
lv_label_set_text(ui_Calibrate_Label1,"help");
lv_obj_set_style_text_color(ui_Calibrate_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Calibrate_Label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Calibrate_Label1, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ConfigHelpBtn1 = lv_imgbtn_create(ui_Update);
lv_imgbtn_set_src(ui_ConfigHelpBtn1, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_2113667733, NULL);
lv_imgbtn_set_src(ui_ConfigHelpBtn1, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_2113667733, NULL);
lv_obj_set_width( ui_ConfigHelpBtn1, 30);
lv_obj_set_height( ui_ConfigHelpBtn1, 55);
lv_obj_set_x( ui_ConfigHelpBtn1, 120 );
lv_obj_set_y( ui_ConfigHelpBtn1, -193 );
lv_obj_set_align( ui_ConfigHelpBtn1, LV_ALIGN_CENTER );

ui_Screen1_Label6 = lv_label_create(ui_Update);
lv_obj_set_width( ui_Screen1_Label6, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label6, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label6, -53 );
lv_obj_set_y( ui_Screen1_Label6, 56 );
lv_obj_set_align( ui_Screen1_Label6, LV_ALIGN_TOP_MID );
lv_label_set_text(ui_Screen1_Label6,"Configuracion > Actualizar");
lv_obj_set_style_text_align(ui_Screen1_Label6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen1_Label6, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Label7 = lv_label_create(ui_Update);
lv_obj_set_width( ui_Screen1_Label7, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label7, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label7, 0 );
lv_obj_set_y( ui_Screen1_Label7, 353 );
lv_obj_set_align( ui_Screen1_Label7, LV_ALIGN_TOP_MID );
lv_label_set_text(ui_Screen1_Label7,"Esta en modo de actualizacion");
lv_obj_set_style_text_align(ui_Screen1_Label7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen1_Label7, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_CalibrateListoBtn1 = lv_btn_create(ui_Update);
lv_obj_set_width( ui_CalibrateListoBtn1, 288);
lv_obj_set_height( ui_CalibrateListoBtn1, 55);
lv_obj_set_x( ui_CalibrateListoBtn1, 0 );
lv_obj_set_y( ui_CalibrateListoBtn1, -30 );
lv_obj_set_align( ui_CalibrateListoBtn1, LV_ALIGN_BOTTOM_MID );
lv_obj_add_flag( ui_CalibrateListoBtn1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_CalibrateListoBtn1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_CalibrateListoBtn1, 15, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_CalibrateListoBtn1, lv_color_hex(0x9E2C28), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_CalibrateListoBtn1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_CalibrateListoBtn1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_CalibrateListoBtn1, 120, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_CalibrateListoBtn1, 20, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_CalibrateListoBtn1, 1, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_ofs_x(ui_CalibrateListoBtn1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_ofs_y(ui_CalibrateListoBtn1, 1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Calibrate_Label2 = lv_label_create(ui_CalibrateListoBtn1);
lv_obj_set_width( ui_Calibrate_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Calibrate_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Calibrate_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Calibrate_Label2,"Cancelar");
lv_obj_set_style_text_font(ui_Calibrate_Label2, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Update_Image1 = lv_img_create(ui_Update);
lv_img_set_src(ui_Update_Image1, &ui_img_refresh_nobg1_png);
lv_obj_set_width( ui_Update_Image1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Update_Image1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Update_Image1, 0 );
lv_obj_set_y( ui_Update_Image1, -23 );
lv_obj_set_align( ui_Update_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Update_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Update_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_angle(ui_Update_Image1,2);

lv_obj_add_event_cb(ui_CalibrateListoBtn1, ui_event_CalibrateListoBtn1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Update, ui_event_Update, LV_EVENT_ALL, NULL);

}

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Splash_screen_init();
ui_home_screen_init();
ui_configuration_screen_init();
ui_Calibrate_screen_init();
ui_Update_screen_init();
lv_disp_load_scr( ui_Splash);
}
