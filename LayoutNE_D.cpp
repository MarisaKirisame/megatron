#include "header.h"
enum class DEStringCase {
  DEStringCaseDefault,
  DSTRING_,
  DSTRING_SLASHdocument,
  DSTRING_SLASHshadow_root,
  DSTRING_SLASHtext,
  DSTRING_100PERCENTAGE,
  DSTRING_A,
  DSTRING_ABBR,
  DSTRING_ACTION_LIST,
  DSTRING_ACTION_MENU,
  DSTRING_ACTIVATE_FEATURE,
  DSTRING_ACTIVE_GLOBAL_BANNERS,
  DSTRING_ANCHORED_POSITION,
  DSTRING_APP_FOOTER,
  DSTRING_APP_ROOT,
  DSTRING_ARTICLE,
  DSTRING_ASIDE,
  DSTRING_AUDIO,
  DSTRING_AUTH_FLOW_GOOGLE_ONE_TAP_SHELL,
  DSTRING_AUTO_CHECK,
  DSTRING_Auto,
  DSTRING_B,
  DSTRING_BLOCKQUOTE,
  DSTRING_BODY,
  DSTRING_BR,
  DSTRING_BUTTON,
  DSTRING_C_WIZ,
  DSTRING_CANVAS,
  DSTRING_CARD_SKEW,
  DSTRING_CENTER,
  DSTRING_CG_AUTO_PIECES,
  DSTRING_CG_BOARD,
  DSTRING_CG_CONTAINER,
  DSTRING_CG_RESIZE,
  DSTRING_CIRCULAR_ACTIVITY_INDICATOR,
  DSTRING_CODE,
  DSTRING_COLLECTION_SEARCH_INPUT,
  DSTRING_COLLECTION_TILE,
  DSTRING_COMMUNITY_HIGHLIGHT_CARD,
  DSTRING_COMMUNITY_HIGHLIGHT_CAROUSEL,
  DSTRING_COOKIE_CONSENT_LINK,
  DSTRING_COORD,
  DSTRING_COORDS,
  DSTRING_CREATE_POST_ENTRY_POINT_WRAPPER,
  DSTRING_CUSTOM_SCOPES,
  DSTRING_CUSTOM_STYLE,
  DSTRING_DATA,
  DSTRING_DATA_SRC,
  DSTRING_DD,
  DSTRING_DESKTOP_SUBNAV,
  DSTRING_DETAILS,
  DSTRING_DEVVIT_EFFECT_WRAPPER,
  DSTRING_DIALOG_HELPER,
  DSTRING_DIV,
  DSTRING_DL,
  DSTRING_DROPDOWN_CLOSE_ON_SCROLL,
  DSTRING_DSA_TRANSPARENCY_MODAL_PROVIDER,
  DSTRING_DT,
  DSTRING_EM,
  DSTRING_FACEPLATE_AUTO_HEIGHT_ANIMATOR,
  DSTRING_FACEPLATE_DIALOG,
  DSTRING_FACEPLATE_DROPDOWN_MENU,
  DSTRING_FACEPLATE_EXPANDABLE_SECTION_HELPER,
  DSTRING_FACEPLATE_HOVERCARD,
  DSTRING_FACEPLATE_IMG,
  DSTRING_FACEPLATE_LOADER,
  DSTRING_FACEPLATE_NUMBER,
  DSTRING_FACEPLATE_PARTIAL,
  DSTRING_FACEPLATE_PERFMARK,
  DSTRING_FACEPLATE_PERFMETRIC_COLLECTOR,
  DSTRING_FACEPLATE_PROGRESS,
  DSTRING_FACEPLATE_SCREEN_READER_CONTENT,
  DSTRING_FACEPLATE_SEARCH_INPUT,
  DSTRING_FACEPLATE_SERVER_SESSION,
  DSTRING_FACEPLATE_TIMEAGO,
  DSTRING_FACEPLATE_TOOLTIP,
  DSTRING_FACEPLATE_TRACKER,
  DSTRING_FIELDSET,
  DSTRING_FIGCAPTION,
  DSTRING_FIGURE,
  DSTRING_FOCUS_GROUP,
  DSTRING_FONT,
  DSTRING_FOOTER,
  DSTRING_FORM,
  DSTRING_FULLSTORY_CAPTURE,
  DSTRING_GHCC_CONSENT,
  DSTRING_GLOBAL_BANNER,
  DSTRING_H1,
  DSTRING_H2,
  DSTRING_H3,
  DSTRING_H4,
  DSTRING_H5,
  DSTRING_H6,
  DSTRING_HEAD,
  DSTRING_HEADER,
  DSTRING_HELP,
  DSTRING_HERO_BLOCK_ANNOUNCEMENTS,
  DSTRING_HGROUP,
  DSTRING_HOME_PAGE,
  DSTRING_HOME_PAGE_HERO_BLOCK,
  DSTRING_HOME_PAGE_HERO_BLOCK_ICON_BAR,
  DSTRING_HOME_PAGE_ONBOARDING,
  DSTRING_HORIZONTAL_ACTIVITY_INDICATOR,
  DSTRING_HR,
  DSTRING_HTML,
  DSTRING_HUI_LEFT_NAV_SEE_MORE,
  DSTRING_I,
  DSTRING_IA_CLEARABLE_TEXT_INPUT,
  DSTRING_IA_ICON_CLOSE,
  DSTRING_IA_TOPNAV,
  DSTRING_IA_WAYBACK_SEARCH,
  DSTRING_ICON_HAMBURGER,
  DSTRING_IFRAME,
  DSTRING_IMG,
  DSTRING_INCLUDE_FRAGMENT,
  DSTRING_INDEX,
  DSTRING_INFINITE_SCROLLER,
  DSTRING_INPUT,
  DSTRING_INS,
  DSTRING_IRON_A11Y_ANNOUNCER,
  DSTRING_LABEL,
  DSTRING_LEFT_NAV_TOP_SECTION,
  DSTRING_LEFT_NAV_TOPIC_TRACKER,
  DSTRING_LEGEND,
  DSTRING_LI,
  DSTRING_LINK,
  DSTRING_LOGIN_BUTTON,
  DSTRING_LOTTIE_PLAYER,
  DSTRING_MAIN,
  DSTRING_MEDIA_BUTTON,
  DSTRING_MEDIA_MENU,
  DSTRING_MEDIA_SLIDER,
  DSTRING_META,
  DSTRING_MODAL_DIALOG,
  DSTRING_MODAL_MANAGER,
  DSTRING_MODAL_TEMPLATE,
  DSTRING_MORE_SLIDER,
  DSTRING_MOVE,
  DSTRING_NAV,
  DSTRING_NAV_SEARCH,
  DSTRING_NAVIGATION_INDICATOR,
  DSTRING_NEXT_ROUTE_ANNOUNCER,
  DSTRING_NG_PLURALIZE,
  DSTRING_NG_VIEW,
  DSTRING_NOBR,
  DSTRING_NOSCRIPT,
  DSTRING_OBJECT,
  DSTRING_OL,
  DSTRING_ONBOARDING_TILE,
  DSTRING_P,
  DSTRING_PEARL,
  DSTRING_PICTURE,
  DSTRING_PIECE,
  DSTRING_PRE,
  DSTRING_PRIMARY_NAV,
  DSTRING_PSA_BANNERS,
  DSTRING_QBSEARCH_INPUT,
  DSTRING_QUERY_BUILDER,
  DSTRING_REACT_APP,
  DSTRING_REACT_PARTIAL,
  DSTRING_REDDIT_BREADCRUMBS,
  DSTRING_REDDIT_HEADER_ACTION_ITEMS,
  DSTRING_REDDIT_HEADER_LARGE,
  DSTRING_REDDIT_PAGE_DATA,
  DSTRING_REDDIT_RECENT_PAGES,
  DSTRING_REDDIT_SEARCH_LARGE,
  DSTRING_REDDIT_SIDEBAR_NAV,
  DSTRING_REDDIT_SKIP_TO_SIDEBAR,
  DSTRING_RELATIVE_TIME,
  DSTRING_REPUTATION_RECAPTCHA,
  DSTRING_ROUTER_SLOT,
  DSTRING_S,
  DSTRING_SAN,
  DSTRING_SAVE_PAGE_FORM,
  DSTRING_SCREEN_READER_ALERT_OUTLET,
  DSTRING_SCRIPT,
  DSTRING_SCROLLABLE_REGION,
  DSTRING_SEARCH_DYNAMIC_ID_CACHE_CONTROLLER,
  DSTRING_SEARCH_MENU,
  DSTRING_SECTION,
  DSTRING_SELECT,
  DSTRING_SHOW_DIALOG_ON_LOAD,
  DSTRING_SHREDDIT_APP,
  DSTRING_SHREDDIT_ASYNC_LOADER,
  DSTRING_SHREDDIT_CONTENT_TAGS,
  DSTRING_SHREDDIT_DISTINGUISHED_POST_TAGS,
  DSTRING_SHREDDIT_FEED,
  DSTRING_SHREDDIT_FEED_ERROR_BANNER,
  DSTRING_SHREDDIT_FEED_PAGE_LOADING,
  DSTRING_SHREDDIT_GALLERY_CAROUSEL,
  DSTRING_SHREDDIT_GOOD_VISIT_TRACKER,
  DSTRING_SHREDDIT_LAYOUT_EVENT_SETTER,
  DSTRING_SHREDDIT_MEDIA_LIGHTBOX,
  DSTRING_SHREDDIT_NAVTIMINGS_COLLECTOR,
  DSTRING_SHREDDIT_OVERLAY_DISPLAY,
  DSTRING_SHREDDIT_PAGE_META,
  DSTRING_SHREDDIT_POST,
  DSTRING_SHREDDIT_POST_FLAIR,
  DSTRING_SHREDDIT_POST_OVERFLOW_MENU,
  DSTRING_SHREDDIT_RECENT_PAGE_DATA,
  DSTRING_SHREDDIT_SCREENVIEW_DATA,
  DSTRING_SHREDDIT_SIDEBAR_AD,
  DSTRING_SHREDDIT_SLOTTER,
  DSTRING_SHREDDIT_SORT_DROPDOWN,
  DSTRING_SHREDDIT_STATUS_ICONS,
  DSTRING_SHREDDIT_SUBREDDIT_HEADER,
  DSTRING_SHREDDIT_TITLE,
  DSTRING_SHREDDIT_WITH_OBSERVER_WRAPPER,
  DSTRING_SIGNAL,
  DSTRING_SIGNED_OUT_DROPDOWN,
  DSTRING_SLOT,
  DSTRING_SMALL,
  DSTRING_SOURCE,
  DSTRING_SPAN,
  DSTRING_SQUARE,
  DSTRING_STRONG,
  DSTRING_STYLE,
  DSTRING_SUMMARY,
  DSTRING_SUP,
  DSTRING_TABLE,
  DSTRING_TBODY,
  DSTRING_TD,
  DSTRING_TEXT,
  DSTRING_TEXTAREA,
  DSTRING_TH,
  DSTRING_THEAD,
  DSTRING_TIME,
  DSTRING_TITLE,
  DSTRING_TOOL_TIP,
  DSTRING_TP_YT_APP_DRAWER,
  DSTRING_TP_YT_PAPER_BUTTON,
  DSTRING_TP_YT_PAPER_ITEM,
  DSTRING_TP_YT_PAPER_TOOLTIP,
  DSTRING_TR,
  DSTRING_TT,
  DSTRING_TURBO_FRAME,
  DSTRING_U,
  DSTRING_UL,
  DSTRING_VIDEO,
  DSTRING_WAYBACK_SEARCH,
  DSTRING_WAYBACK_SLIDER,
  DSTRING_YT_ANIMATED_ROLLING_NUMBER,
  DSTRING_YT_ATTRIBUTED_STRING,
  DSTRING_YT_BUTTON_SHAPE,
  DSTRING_YT_FORMATTED_STRING,
  DSTRING_YT_GUIDE_MANAGER,
  DSTRING_YT_HOTKEY_MANAGER,
  DSTRING_YT_ICON,
  DSTRING_YT_ICON_BUTTON,
  DSTRING_YT_IMAGE,
  DSTRING_YT_IMG_SHADOW,
  DSTRING_YT_INLINE_PLAYER_CONTROLS,
  DSTRING_YT_INTERACTION,
  DSTRING_YT_MDX_MANAGER,
  DSTRING_YT_PLAYLIST_MANAGER,
  DSTRING_YT_TOUCH_FEEDBACK_SHAPE,
  DSTRING_YTD_APP,
  DSTRING_YTD_BROWSE,
  DSTRING_YTD_BUTTON_RENDERER,
  DSTRING_YTD_CHANNEL_NAME,
  DSTRING_YTD_FEED_NUDGE_RENDERER,
  DSTRING_YTD_GUIDE_ENTRY_RENDERER,
  DSTRING_YTD_GUIDE_RENDERER,
  DSTRING_YTD_GUIDE_SECTION_RENDERER,
  DSTRING_YTD_GUIDE_SIGNIN_PROMO_RENDERER,
  DSTRING_YTD_LOGO,
  DSTRING_YTD_LOTTIE_PLAYER,
  DSTRING_YTD_MASTHEAD,
  DSTRING_YTD_METADATA_ROW_CONTAINER_RENDERER,
  DSTRING_YTD_MINI_GUIDE_ENTRY_RENDERER,
  DSTRING_YTD_MINI_GUIDE_RENDERER,
  DSTRING_YTD_MINIPLAYER,
  DSTRING_YTD_MINIPLAYER_TOAST,
  DSTRING_YTD_PAGE_MANAGER,
  DSTRING_YTD_PERMISSION_ROLE_BOTTOM_BAR_RENDERER,
  DSTRING_YTD_PLAYER,
  DSTRING_YTD_POPUP_CONTAINER,
  DSTRING_YTD_RICH_GRID_RENDERER,
  DSTRING_YTD_RICH_SECTION_RENDERER,
  DSTRING_YTD_SEARCHBOX,
  DSTRING_YTD_STRUCTURED_DESCRIPTION_CONTENT_RENDERER,
  DSTRING_YTD_TEXT_INLINE_EXPANDER,
  DSTRING_YTD_THIRD_PARTY_MANAGER,
  DSTRING_YTD_THUMBNAIL,
  DSTRING_YTD_TOPBAR_LOGO_RENDERER,
  DSTRING_YTD_TOPBAR_MENU_BUTTON_RENDERER,
  DSTRING_YTD_TWO_COLUMN_BROWSE_RESULTS_RENDERER,
  DSTRING_YTD_VIDEO_OWNER_RENDERER,
  DSTRING_YTD_VIDEO_PRIMARY_INFO_RENDERER,
  DSTRING_YTD_WATCH_INFO_TEXT,
  DSTRING_YTD_WATCH_METADATA,
  DSTRING_YTD_WATCH_NEXT_SECONDARY_RESULTS_RENDERER,
  DSTRING_YTD_YOODLE_RENDERER,
  DSTRING_absolute,
  DSTRING_auto,
  DSTRING_block,
  DSTRING_column,
  DSTRING_column_reverse,
  DSTRING_contents,
  DSTRING_fit_content,
  DSTRING_flex,
  DSTRING_grid,
  DSTRING_html,
  DSTRING_inline,
  DSTRING_inline_block,
  DSTRING_inline_flex,
  DSTRING_inline_grid,
  DSTRING_list_item,
  DSTRING_max_content,
  DSTRING_min_content,
  DSTRING_none,
  DSTRING_row,
  DSTRING_row_reverse,
  DSTRING_static,
  DSTRING_svg,
  DSTRING_table,
  DSTRING_table_cell,
  DSTRING_table_header_group,
  DSTRING_table_row,
  DSTRING_table_row_group,
  DHasSuffix_PERCENTAGE,
  DHasSuffix_ch,
  DHasSuffix_em,
  DHasSuffix_lh,
  DHasSuffix_px,
  DStringIsFloat,
  DHasPrefix_calc,
};
struct DEStringRest {
  double a0 = 0, a1 = 0, a2 = 0, a3 = 0;
};
struct DEString {
  DEStringCase c;
  DEStringRest r;
};
struct Meta {
  bool bb_3_has_bb_dirtied = false;
  bool bb_3_bb_dirtied;
  bool bb_1_has_bb_dirtied = false;
  bool bb_1_bb_dirtied;
  bool bb_0_has_bb_dirtied = false;
  bool bb_0_bb_dirtied;
  bool bb_2_has_bb_dirtied = false;
  bool bb_2_bb_dirtied;
  bool pass_0_proc_inited = false;
  bool pass_1_proc_inited = false;
};

struct Value {
  std::variant<int64_t, double, bool, DEString> v;
};

DEString DEStringLit(DEStringCase c) {
  DEString des;
  des.c = c;
  return des;
}
bool Asbool(const bool &b) { return b; }
bool Asbool(const Value &v) { return std::get<bool>(v.v); }
DEString AsDEString(const DEString &d) { return d; }
DEString AsDEString(const Value &v) { return std::get<DEString>(v.v); }
double Asdouble(const double &d) { return d; }
double Asdouble(const Value &v) { return std::get<double>(v.v); }
int64_t Asint64_t(const int64_t &i) { return i; }
int64_t Asint64_t(const Value &v) { return std::get<int64_t>(v.v); }
DEStringRest StringToDEStringRest(const std::string &str);
DEString StringToDEString(const std::string &str) {
  if (str == "") {
    return DEStringLit(DEStringCase::DSTRING_);
  }
  if (str == "#document") {
    return DEStringLit(DEStringCase::DSTRING_SLASHdocument);
  }
  if (str == "#shadow-root") {
    return DEStringLit(DEStringCase::DSTRING_SLASHshadow_root);
  }
  if (str == "#text") {
    return DEStringLit(DEStringCase::DSTRING_SLASHtext);
  }
  if (str == "100%") {
    return DEStringLit(DEStringCase::DSTRING_100PERCENTAGE);
  }
  if (str == "A") {
    return DEStringLit(DEStringCase::DSTRING_A);
  }
  if (str == "ABBR") {
    return DEStringLit(DEStringCase::DSTRING_ABBR);
  }
  if (str == "ACTION-LIST") {
    return DEStringLit(DEStringCase::DSTRING_ACTION_LIST);
  }
  if (str == "ACTION-MENU") {
    return DEStringLit(DEStringCase::DSTRING_ACTION_MENU);
  }
  if (str == "ACTIVATE-FEATURE") {
    return DEStringLit(DEStringCase::DSTRING_ACTIVATE_FEATURE);
  }
  if (str == "ACTIVE-GLOBAL-BANNERS") {
    return DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS);
  }
  if (str == "ANCHORED-POSITION") {
    return DEStringLit(DEStringCase::DSTRING_ANCHORED_POSITION);
  }
  if (str == "APP-FOOTER") {
    return DEStringLit(DEStringCase::DSTRING_APP_FOOTER);
  }
  if (str == "APP-ROOT") {
    return DEStringLit(DEStringCase::DSTRING_APP_ROOT);
  }
  if (str == "ARTICLE") {
    return DEStringLit(DEStringCase::DSTRING_ARTICLE);
  }
  if (str == "ASIDE") {
    return DEStringLit(DEStringCase::DSTRING_ASIDE);
  }
  if (str == "AUDIO") {
    return DEStringLit(DEStringCase::DSTRING_AUDIO);
  }
  if (str == "AUTH-FLOW-GOOGLE-ONE-TAP-SHELL") {
    return DEStringLit(DEStringCase::DSTRING_AUTH_FLOW_GOOGLE_ONE_TAP_SHELL);
  }
  if (str == "AUTO-CHECK") {
    return DEStringLit(DEStringCase::DSTRING_AUTO_CHECK);
  }
  if (str == "Auto") {
    return DEStringLit(DEStringCase::DSTRING_Auto);
  }
  if (str == "B") {
    return DEStringLit(DEStringCase::DSTRING_B);
  }
  if (str == "BLOCKQUOTE") {
    return DEStringLit(DEStringCase::DSTRING_BLOCKQUOTE);
  }
  if (str == "BODY") {
    return DEStringLit(DEStringCase::DSTRING_BODY);
  }
  if (str == "BR") {
    return DEStringLit(DEStringCase::DSTRING_BR);
  }
  if (str == "BUTTON") {
    return DEStringLit(DEStringCase::DSTRING_BUTTON);
  }
  if (str == "C-WIZ") {
    return DEStringLit(DEStringCase::DSTRING_C_WIZ);
  }
  if (str == "CANVAS") {
    return DEStringLit(DEStringCase::DSTRING_CANVAS);
  }
  if (str == "CARD-SKEW") {
    return DEStringLit(DEStringCase::DSTRING_CARD_SKEW);
  }
  if (str == "CENTER") {
    return DEStringLit(DEStringCase::DSTRING_CENTER);
  }
  if (str == "CG-AUTO-PIECES") {
    return DEStringLit(DEStringCase::DSTRING_CG_AUTO_PIECES);
  }
  if (str == "CG-BOARD") {
    return DEStringLit(DEStringCase::DSTRING_CG_BOARD);
  }
  if (str == "CG-CONTAINER") {
    return DEStringLit(DEStringCase::DSTRING_CG_CONTAINER);
  }
  if (str == "CG-RESIZE") {
    return DEStringLit(DEStringCase::DSTRING_CG_RESIZE);
  }
  if (str == "CIRCULAR-ACTIVITY-INDICATOR") {
    return DEStringLit(DEStringCase::DSTRING_CIRCULAR_ACTIVITY_INDICATOR);
  }
  if (str == "CODE") {
    return DEStringLit(DEStringCase::DSTRING_CODE);
  }
  if (str == "COLLECTION-SEARCH-INPUT") {
    return DEStringLit(DEStringCase::DSTRING_COLLECTION_SEARCH_INPUT);
  }
  if (str == "COLLECTION-TILE") {
    return DEStringLit(DEStringCase::DSTRING_COLLECTION_TILE);
  }
  if (str == "COMMUNITY-HIGHLIGHT-CARD") {
    return DEStringLit(DEStringCase::DSTRING_COMMUNITY_HIGHLIGHT_CARD);
  }
  if (str == "COMMUNITY-HIGHLIGHT-CAROUSEL") {
    return DEStringLit(DEStringCase::DSTRING_COMMUNITY_HIGHLIGHT_CAROUSEL);
  }
  if (str == "COOKIE-CONSENT-LINK") {
    return DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK);
  }
  if (str == "COORD") {
    return DEStringLit(DEStringCase::DSTRING_COORD);
  }
  if (str == "COORDS") {
    return DEStringLit(DEStringCase::DSTRING_COORDS);
  }
  if (str == "CREATE-POST-ENTRY-POINT-WRAPPER") {
    return DEStringLit(DEStringCase::DSTRING_CREATE_POST_ENTRY_POINT_WRAPPER);
  }
  if (str == "CUSTOM-SCOPES") {
    return DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES);
  }
  if (str == "CUSTOM-STYLE") {
    return DEStringLit(DEStringCase::DSTRING_CUSTOM_STYLE);
  }
  if (str == "DATA") {
    return DEStringLit(DEStringCase::DSTRING_DATA);
  }
  if (str == "DATA-SRC") {
    return DEStringLit(DEStringCase::DSTRING_DATA_SRC);
  }
  if (str == "DD") {
    return DEStringLit(DEStringCase::DSTRING_DD);
  }
  if (str == "DESKTOP-SUBNAV") {
    return DEStringLit(DEStringCase::DSTRING_DESKTOP_SUBNAV);
  }
  if (str == "DETAILS") {
    return DEStringLit(DEStringCase::DSTRING_DETAILS);
  }
  if (str == "DEVVIT-EFFECT-WRAPPER") {
    return DEStringLit(DEStringCase::DSTRING_DEVVIT_EFFECT_WRAPPER);
  }
  if (str == "DIALOG-HELPER") {
    return DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER);
  }
  if (str == "DIV") {
    return DEStringLit(DEStringCase::DSTRING_DIV);
  }
  if (str == "DL") {
    return DEStringLit(DEStringCase::DSTRING_DL);
  }
  if (str == "DROPDOWN-CLOSE-ON-SCROLL") {
    return DEStringLit(DEStringCase::DSTRING_DROPDOWN_CLOSE_ON_SCROLL);
  }
  if (str == "DSA-TRANSPARENCY-MODAL-PROVIDER") {
    return DEStringLit(DEStringCase::DSTRING_DSA_TRANSPARENCY_MODAL_PROVIDER);
  }
  if (str == "DT") {
    return DEStringLit(DEStringCase::DSTRING_DT);
  }
  if (str == "EM") {
    return DEStringLit(DEStringCase::DSTRING_EM);
  }
  if (str == "FACEPLATE-AUTO-HEIGHT-ANIMATOR") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_AUTO_HEIGHT_ANIMATOR);
  }
  if (str == "FACEPLATE-DIALOG") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_DIALOG);
  }
  if (str == "FACEPLATE-DROPDOWN-MENU") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_DROPDOWN_MENU);
  }
  if (str == "FACEPLATE-EXPANDABLE-SECTION-HELPER") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_EXPANDABLE_SECTION_HELPER);
  }
  if (str == "FACEPLATE-HOVERCARD") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_HOVERCARD);
  }
  if (str == "FACEPLATE-IMG") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_IMG);
  }
  if (str == "FACEPLATE-LOADER") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_LOADER);
  }
  if (str == "FACEPLATE-NUMBER") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_NUMBER);
  }
  if (str == "FACEPLATE-PARTIAL") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_PARTIAL);
  }
  if (str == "FACEPLATE-PERFMARK") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_PERFMARK);
  }
  if (str == "FACEPLATE-PERFMETRIC-COLLECTOR") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_PERFMETRIC_COLLECTOR);
  }
  if (str == "FACEPLATE-PROGRESS") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_PROGRESS);
  }
  if (str == "FACEPLATE-SCREEN-READER-CONTENT") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_SCREEN_READER_CONTENT);
  }
  if (str == "FACEPLATE-SEARCH-INPUT") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_SEARCH_INPUT);
  }
  if (str == "FACEPLATE-SERVER-SESSION") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_SERVER_SESSION);
  }
  if (str == "FACEPLATE-TIMEAGO") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_TIMEAGO);
  }
  if (str == "FACEPLATE-TOOLTIP") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_TOOLTIP);
  }
  if (str == "FACEPLATE-TRACKER") {
    return DEStringLit(DEStringCase::DSTRING_FACEPLATE_TRACKER);
  }
  if (str == "FIELDSET") {
    return DEStringLit(DEStringCase::DSTRING_FIELDSET);
  }
  if (str == "FIGCAPTION") {
    return DEStringLit(DEStringCase::DSTRING_FIGCAPTION);
  }
  if (str == "FIGURE") {
    return DEStringLit(DEStringCase::DSTRING_FIGURE);
  }
  if (str == "FOCUS-GROUP") {
    return DEStringLit(DEStringCase::DSTRING_FOCUS_GROUP);
  }
  if (str == "FONT") {
    return DEStringLit(DEStringCase::DSTRING_FONT);
  }
  if (str == "FOOTER") {
    return DEStringLit(DEStringCase::DSTRING_FOOTER);
  }
  if (str == "FORM") {
    return DEStringLit(DEStringCase::DSTRING_FORM);
  }
  if (str == "FULLSTORY-CAPTURE") {
    return DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE);
  }
  if (str == "GHCC-CONSENT") {
    return DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT);
  }
  if (str == "GLOBAL-BANNER") {
    return DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER);
  }
  if (str == "H1") {
    return DEStringLit(DEStringCase::DSTRING_H1);
  }
  if (str == "H2") {
    return DEStringLit(DEStringCase::DSTRING_H2);
  }
  if (str == "H3") {
    return DEStringLit(DEStringCase::DSTRING_H3);
  }
  if (str == "H4") {
    return DEStringLit(DEStringCase::DSTRING_H4);
  }
  if (str == "H5") {
    return DEStringLit(DEStringCase::DSTRING_H5);
  }
  if (str == "H6") {
    return DEStringLit(DEStringCase::DSTRING_H6);
  }
  if (str == "HEAD") {
    return DEStringLit(DEStringCase::DSTRING_HEAD);
  }
  if (str == "HEADER") {
    return DEStringLit(DEStringCase::DSTRING_HEADER);
  }
  if (str == "HELP") {
    return DEStringLit(DEStringCase::DSTRING_HELP);
  }
  if (str == "HERO-BLOCK-ANNOUNCEMENTS") {
    return DEStringLit(DEStringCase::DSTRING_HERO_BLOCK_ANNOUNCEMENTS);
  }
  if (str == "HGROUP") {
    return DEStringLit(DEStringCase::DSTRING_HGROUP);
  }
  if (str == "HOME-PAGE") {
    return DEStringLit(DEStringCase::DSTRING_HOME_PAGE);
  }
  if (str == "HOME-PAGE-HERO-BLOCK") {
    return DEStringLit(DEStringCase::DSTRING_HOME_PAGE_HERO_BLOCK);
  }
  if (str == "HOME-PAGE-HERO-BLOCK-ICON-BAR") {
    return DEStringLit(DEStringCase::DSTRING_HOME_PAGE_HERO_BLOCK_ICON_BAR);
  }
  if (str == "HOME-PAGE-ONBOARDING") {
    return DEStringLit(DEStringCase::DSTRING_HOME_PAGE_ONBOARDING);
  }
  if (str == "HORIZONTAL-ACTIVITY-INDICATOR") {
    return DEStringLit(DEStringCase::DSTRING_HORIZONTAL_ACTIVITY_INDICATOR);
  }
  if (str == "HR") {
    return DEStringLit(DEStringCase::DSTRING_HR);
  }
  if (str == "HTML") {
    return DEStringLit(DEStringCase::DSTRING_HTML);
  }
  if (str == "HUI-LEFT-NAV-SEE-MORE") {
    return DEStringLit(DEStringCase::DSTRING_HUI_LEFT_NAV_SEE_MORE);
  }
  if (str == "I") {
    return DEStringLit(DEStringCase::DSTRING_I);
  }
  if (str == "IA-CLEARABLE-TEXT-INPUT") {
    return DEStringLit(DEStringCase::DSTRING_IA_CLEARABLE_TEXT_INPUT);
  }
  if (str == "IA-ICON-CLOSE") {
    return DEStringLit(DEStringCase::DSTRING_IA_ICON_CLOSE);
  }
  if (str == "IA-TOPNAV") {
    return DEStringLit(DEStringCase::DSTRING_IA_TOPNAV);
  }
  if (str == "IA-WAYBACK-SEARCH") {
    return DEStringLit(DEStringCase::DSTRING_IA_WAYBACK_SEARCH);
  }
  if (str == "ICON-HAMBURGER") {
    return DEStringLit(DEStringCase::DSTRING_ICON_HAMBURGER);
  }
  if (str == "IFRAME") {
    return DEStringLit(DEStringCase::DSTRING_IFRAME);
  }
  if (str == "IMG") {
    return DEStringLit(DEStringCase::DSTRING_IMG);
  }
  if (str == "INCLUDE-FRAGMENT") {
    return DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT);
  }
  if (str == "INDEX") {
    return DEStringLit(DEStringCase::DSTRING_INDEX);
  }
  if (str == "INFINITE-SCROLLER") {
    return DEStringLit(DEStringCase::DSTRING_INFINITE_SCROLLER);
  }
  if (str == "INPUT") {
    return DEStringLit(DEStringCase::DSTRING_INPUT);
  }
  if (str == "INS") {
    return DEStringLit(DEStringCase::DSTRING_INS);
  }
  if (str == "IRON-A11Y-ANNOUNCER") {
    return DEStringLit(DEStringCase::DSTRING_IRON_A11Y_ANNOUNCER);
  }
  if (str == "LABEL") {
    return DEStringLit(DEStringCase::DSTRING_LABEL);
  }
  if (str == "LEFT-NAV-TOP-SECTION") {
    return DEStringLit(DEStringCase::DSTRING_LEFT_NAV_TOP_SECTION);
  }
  if (str == "LEFT-NAV-TOPIC-TRACKER") {
    return DEStringLit(DEStringCase::DSTRING_LEFT_NAV_TOPIC_TRACKER);
  }
  if (str == "LEGEND") {
    return DEStringLit(DEStringCase::DSTRING_LEGEND);
  }
  if (str == "LI") {
    return DEStringLit(DEStringCase::DSTRING_LI);
  }
  if (str == "LINK") {
    return DEStringLit(DEStringCase::DSTRING_LINK);
  }
  if (str == "LOGIN-BUTTON") {
    return DEStringLit(DEStringCase::DSTRING_LOGIN_BUTTON);
  }
  if (str == "LOTTIE-PLAYER") {
    return DEStringLit(DEStringCase::DSTRING_LOTTIE_PLAYER);
  }
  if (str == "MAIN") {
    return DEStringLit(DEStringCase::DSTRING_MAIN);
  }
  if (str == "MEDIA-BUTTON") {
    return DEStringLit(DEStringCase::DSTRING_MEDIA_BUTTON);
  }
  if (str == "MEDIA-MENU") {
    return DEStringLit(DEStringCase::DSTRING_MEDIA_MENU);
  }
  if (str == "MEDIA-SLIDER") {
    return DEStringLit(DEStringCase::DSTRING_MEDIA_SLIDER);
  }
  if (str == "META") {
    return DEStringLit(DEStringCase::DSTRING_META);
  }
  if (str == "MODAL-DIALOG") {
    return DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG);
  }
  if (str == "MODAL-MANAGER") {
    return DEStringLit(DEStringCase::DSTRING_MODAL_MANAGER);
  }
  if (str == "MODAL-TEMPLATE") {
    return DEStringLit(DEStringCase::DSTRING_MODAL_TEMPLATE);
  }
  if (str == "MORE-SLIDER") {
    return DEStringLit(DEStringCase::DSTRING_MORE_SLIDER);
  }
  if (str == "MOVE") {
    return DEStringLit(DEStringCase::DSTRING_MOVE);
  }
  if (str == "NAV") {
    return DEStringLit(DEStringCase::DSTRING_NAV);
  }
  if (str == "NAV-SEARCH") {
    return DEStringLit(DEStringCase::DSTRING_NAV_SEARCH);
  }
  if (str == "NAVIGATION-INDICATOR") {
    return DEStringLit(DEStringCase::DSTRING_NAVIGATION_INDICATOR);
  }
  if (str == "NEXT-ROUTE-ANNOUNCER") {
    return DEStringLit(DEStringCase::DSTRING_NEXT_ROUTE_ANNOUNCER);
  }
  if (str == "NG-PLURALIZE") {
    return DEStringLit(DEStringCase::DSTRING_NG_PLURALIZE);
  }
  if (str == "NG-VIEW") {
    return DEStringLit(DEStringCase::DSTRING_NG_VIEW);
  }
  if (str == "NOBR") {
    return DEStringLit(DEStringCase::DSTRING_NOBR);
  }
  if (str == "NOSCRIPT") {
    return DEStringLit(DEStringCase::DSTRING_NOSCRIPT);
  }
  if (str == "OBJECT") {
    return DEStringLit(DEStringCase::DSTRING_OBJECT);
  }
  if (str == "OL") {
    return DEStringLit(DEStringCase::DSTRING_OL);
  }
  if (str == "ONBOARDING-TILE") {
    return DEStringLit(DEStringCase::DSTRING_ONBOARDING_TILE);
  }
  if (str == "P") {
    return DEStringLit(DEStringCase::DSTRING_P);
  }
  if (str == "PEARL") {
    return DEStringLit(DEStringCase::DSTRING_PEARL);
  }
  if (str == "PICTURE") {
    return DEStringLit(DEStringCase::DSTRING_PICTURE);
  }
  if (str == "PIECE") {
    return DEStringLit(DEStringCase::DSTRING_PIECE);
  }
  if (str == "PRE") {
    return DEStringLit(DEStringCase::DSTRING_PRE);
  }
  if (str == "PRIMARY-NAV") {
    return DEStringLit(DEStringCase::DSTRING_PRIMARY_NAV);
  }
  if (str == "PSA-BANNERS") {
    return DEStringLit(DEStringCase::DSTRING_PSA_BANNERS);
  }
  if (str == "QBSEARCH-INPUT") {
    return DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT);
  }
  if (str == "QUERY-BUILDER") {
    return DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER);
  }
  if (str == "REACT-APP") {
    return DEStringLit(DEStringCase::DSTRING_REACT_APP);
  }
  if (str == "REACT-PARTIAL") {
    return DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL);
  }
  if (str == "REDDIT-BREADCRUMBS") {
    return DEStringLit(DEStringCase::DSTRING_REDDIT_BREADCRUMBS);
  }
  if (str == "REDDIT-HEADER-ACTION-ITEMS") {
    return DEStringLit(DEStringCase::DSTRING_REDDIT_HEADER_ACTION_ITEMS);
  }
  if (str == "REDDIT-HEADER-LARGE") {
    return DEStringLit(DEStringCase::DSTRING_REDDIT_HEADER_LARGE);
  }
  if (str == "REDDIT-PAGE-DATA") {
    return DEStringLit(DEStringCase::DSTRING_REDDIT_PAGE_DATA);
  }
  if (str == "REDDIT-RECENT-PAGES") {
    return DEStringLit(DEStringCase::DSTRING_REDDIT_RECENT_PAGES);
  }
  if (str == "REDDIT-SEARCH-LARGE") {
    return DEStringLit(DEStringCase::DSTRING_REDDIT_SEARCH_LARGE);
  }
  if (str == "REDDIT-SIDEBAR-NAV") {
    return DEStringLit(DEStringCase::DSTRING_REDDIT_SIDEBAR_NAV);
  }
  if (str == "REDDIT-SKIP-TO-SIDEBAR") {
    return DEStringLit(DEStringCase::DSTRING_REDDIT_SKIP_TO_SIDEBAR);
  }
  if (str == "RELATIVE-TIME") {
    return DEStringLit(DEStringCase::DSTRING_RELATIVE_TIME);
  }
  if (str == "REPUTATION-RECAPTCHA") {
    return DEStringLit(DEStringCase::DSTRING_REPUTATION_RECAPTCHA);
  }
  if (str == "ROUTER-SLOT") {
    return DEStringLit(DEStringCase::DSTRING_ROUTER_SLOT);
  }
  if (str == "S") {
    return DEStringLit(DEStringCase::DSTRING_S);
  }
  if (str == "SAN") {
    return DEStringLit(DEStringCase::DSTRING_SAN);
  }
  if (str == "SAVE-PAGE-FORM") {
    return DEStringLit(DEStringCase::DSTRING_SAVE_PAGE_FORM);
  }
  if (str == "SCREEN-READER-ALERT-OUTLET") {
    return DEStringLit(DEStringCase::DSTRING_SCREEN_READER_ALERT_OUTLET);
  }
  if (str == "SCRIPT") {
    return DEStringLit(DEStringCase::DSTRING_SCRIPT);
  }
  if (str == "SCROLLABLE-REGION") {
    return DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION);
  }
  if (str == "SEARCH-DYNAMIC-ID-CACHE-CONTROLLER") {
    return DEStringLit(DEStringCase::DSTRING_SEARCH_DYNAMIC_ID_CACHE_CONTROLLER);
  }
  if (str == "SEARCH-MENU") {
    return DEStringLit(DEStringCase::DSTRING_SEARCH_MENU);
  }
  if (str == "SECTION") {
    return DEStringLit(DEStringCase::DSTRING_SECTION);
  }
  if (str == "SELECT") {
    return DEStringLit(DEStringCase::DSTRING_SELECT);
  }
  if (str == "SHOW-DIALOG-ON-LOAD") {
    return DEStringLit(DEStringCase::DSTRING_SHOW_DIALOG_ON_LOAD);
  }
  if (str == "SHREDDIT-APP") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_APP);
  }
  if (str == "SHREDDIT-ASYNC-LOADER") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_ASYNC_LOADER);
  }
  if (str == "SHREDDIT-CONTENT-TAGS") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_CONTENT_TAGS);
  }
  if (str == "SHREDDIT-DISTINGUISHED-POST-TAGS") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_DISTINGUISHED_POST_TAGS);
  }
  if (str == "SHREDDIT-FEED") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_FEED);
  }
  if (str == "SHREDDIT-FEED-ERROR-BANNER") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_FEED_ERROR_BANNER);
  }
  if (str == "SHREDDIT-FEED-PAGE-LOADING") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_FEED_PAGE_LOADING);
  }
  if (str == "SHREDDIT-GALLERY-CAROUSEL") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_GALLERY_CAROUSEL);
  }
  if (str == "SHREDDIT-GOOD-VISIT-TRACKER") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_GOOD_VISIT_TRACKER);
  }
  if (str == "SHREDDIT-LAYOUT-EVENT-SETTER") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_LAYOUT_EVENT_SETTER);
  }
  if (str == "SHREDDIT-MEDIA-LIGHTBOX") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_MEDIA_LIGHTBOX);
  }
  if (str == "SHREDDIT-NAVTIMINGS-COLLECTOR") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_NAVTIMINGS_COLLECTOR);
  }
  if (str == "SHREDDIT-OVERLAY-DISPLAY") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_OVERLAY_DISPLAY);
  }
  if (str == "SHREDDIT-PAGE-META") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_PAGE_META);
  }
  if (str == "SHREDDIT-POST") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_POST);
  }
  if (str == "SHREDDIT-POST-FLAIR") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_POST_FLAIR);
  }
  if (str == "SHREDDIT-POST-OVERFLOW-MENU") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_POST_OVERFLOW_MENU);
  }
  if (str == "SHREDDIT-RECENT-PAGE-DATA") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_RECENT_PAGE_DATA);
  }
  if (str == "SHREDDIT-SCREENVIEW-DATA") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_SCREENVIEW_DATA);
  }
  if (str == "SHREDDIT-SIDEBAR-AD") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_SIDEBAR_AD);
  }
  if (str == "SHREDDIT-SLOTTER") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_SLOTTER);
  }
  if (str == "SHREDDIT-SORT-DROPDOWN") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_SORT_DROPDOWN);
  }
  if (str == "SHREDDIT-STATUS-ICONS") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_STATUS_ICONS);
  }
  if (str == "SHREDDIT-SUBREDDIT-HEADER") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_SUBREDDIT_HEADER);
  }
  if (str == "SHREDDIT-TITLE") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_TITLE);
  }
  if (str == "SHREDDIT-WITH-OBSERVER-WRAPPER") {
    return DEStringLit(DEStringCase::DSTRING_SHREDDIT_WITH_OBSERVER_WRAPPER);
  }
  if (str == "SIGNAL") {
    return DEStringLit(DEStringCase::DSTRING_SIGNAL);
  }
  if (str == "SIGNED-OUT-DROPDOWN") {
    return DEStringLit(DEStringCase::DSTRING_SIGNED_OUT_DROPDOWN);
  }
  if (str == "SLOT") {
    return DEStringLit(DEStringCase::DSTRING_SLOT);
  }
  if (str == "SMALL") {
    return DEStringLit(DEStringCase::DSTRING_SMALL);
  }
  if (str == "SOURCE") {
    return DEStringLit(DEStringCase::DSTRING_SOURCE);
  }
  if (str == "SPAN") {
    return DEStringLit(DEStringCase::DSTRING_SPAN);
  }
  if (str == "SQUARE") {
    return DEStringLit(DEStringCase::DSTRING_SQUARE);
  }
  if (str == "STRONG") {
    return DEStringLit(DEStringCase::DSTRING_STRONG);
  }
  if (str == "STYLE") {
    return DEStringLit(DEStringCase::DSTRING_STYLE);
  }
  if (str == "SUMMARY") {
    return DEStringLit(DEStringCase::DSTRING_SUMMARY);
  }
  if (str == "SUP") {
    return DEStringLit(DEStringCase::DSTRING_SUP);
  }
  if (str == "TABLE") {
    return DEStringLit(DEStringCase::DSTRING_TABLE);
  }
  if (str == "TBODY") {
    return DEStringLit(DEStringCase::DSTRING_TBODY);
  }
  if (str == "TD") {
    return DEStringLit(DEStringCase::DSTRING_TD);
  }
  if (str == "TEXT") {
    return DEStringLit(DEStringCase::DSTRING_TEXT);
  }
  if (str == "TEXTAREA") {
    return DEStringLit(DEStringCase::DSTRING_TEXTAREA);
  }
  if (str == "TH") {
    return DEStringLit(DEStringCase::DSTRING_TH);
  }
  if (str == "THEAD") {
    return DEStringLit(DEStringCase::DSTRING_THEAD);
  }
  if (str == "TIME") {
    return DEStringLit(DEStringCase::DSTRING_TIME);
  }
  if (str == "TITLE") {
    return DEStringLit(DEStringCase::DSTRING_TITLE);
  }
  if (str == "TOOL-TIP") {
    return DEStringLit(DEStringCase::DSTRING_TOOL_TIP);
  }
  if (str == "TP-YT-APP-DRAWER") {
    return DEStringLit(DEStringCase::DSTRING_TP_YT_APP_DRAWER);
  }
  if (str == "TP-YT-PAPER-BUTTON") {
    return DEStringLit(DEStringCase::DSTRING_TP_YT_PAPER_BUTTON);
  }
  if (str == "TP-YT-PAPER-ITEM") {
    return DEStringLit(DEStringCase::DSTRING_TP_YT_PAPER_ITEM);
  }
  if (str == "TP-YT-PAPER-TOOLTIP") {
    return DEStringLit(DEStringCase::DSTRING_TP_YT_PAPER_TOOLTIP);
  }
  if (str == "TR") {
    return DEStringLit(DEStringCase::DSTRING_TR);
  }
  if (str == "TT") {
    return DEStringLit(DEStringCase::DSTRING_TT);
  }
  if (str == "TURBO-FRAME") {
    return DEStringLit(DEStringCase::DSTRING_TURBO_FRAME);
  }
  if (str == "U") {
    return DEStringLit(DEStringCase::DSTRING_U);
  }
  if (str == "UL") {
    return DEStringLit(DEStringCase::DSTRING_UL);
  }
  if (str == "VIDEO") {
    return DEStringLit(DEStringCase::DSTRING_VIDEO);
  }
  if (str == "WAYBACK-SEARCH") {
    return DEStringLit(DEStringCase::DSTRING_WAYBACK_SEARCH);
  }
  if (str == "WAYBACK-SLIDER") {
    return DEStringLit(DEStringCase::DSTRING_WAYBACK_SLIDER);
  }
  if (str == "YT-ANIMATED-ROLLING-NUMBER") {
    return DEStringLit(DEStringCase::DSTRING_YT_ANIMATED_ROLLING_NUMBER);
  }
  if (str == "YT-ATTRIBUTED-STRING") {
    return DEStringLit(DEStringCase::DSTRING_YT_ATTRIBUTED_STRING);
  }
  if (str == "YT-BUTTON-SHAPE") {
    return DEStringLit(DEStringCase::DSTRING_YT_BUTTON_SHAPE);
  }
  if (str == "YT-FORMATTED-STRING") {
    return DEStringLit(DEStringCase::DSTRING_YT_FORMATTED_STRING);
  }
  if (str == "YT-GUIDE-MANAGER") {
    return DEStringLit(DEStringCase::DSTRING_YT_GUIDE_MANAGER);
  }
  if (str == "YT-HOTKEY-MANAGER") {
    return DEStringLit(DEStringCase::DSTRING_YT_HOTKEY_MANAGER);
  }
  if (str == "YT-ICON") {
    return DEStringLit(DEStringCase::DSTRING_YT_ICON);
  }
  if (str == "YT-ICON-BUTTON") {
    return DEStringLit(DEStringCase::DSTRING_YT_ICON_BUTTON);
  }
  if (str == "YT-IMAGE") {
    return DEStringLit(DEStringCase::DSTRING_YT_IMAGE);
  }
  if (str == "YT-IMG-SHADOW") {
    return DEStringLit(DEStringCase::DSTRING_YT_IMG_SHADOW);
  }
  if (str == "YT-INLINE-PLAYER-CONTROLS") {
    return DEStringLit(DEStringCase::DSTRING_YT_INLINE_PLAYER_CONTROLS);
  }
  if (str == "YT-INTERACTION") {
    return DEStringLit(DEStringCase::DSTRING_YT_INTERACTION);
  }
  if (str == "YT-MDX-MANAGER") {
    return DEStringLit(DEStringCase::DSTRING_YT_MDX_MANAGER);
  }
  if (str == "YT-PLAYLIST-MANAGER") {
    return DEStringLit(DEStringCase::DSTRING_YT_PLAYLIST_MANAGER);
  }
  if (str == "YT-TOUCH-FEEDBACK-SHAPE") {
    return DEStringLit(DEStringCase::DSTRING_YT_TOUCH_FEEDBACK_SHAPE);
  }
  if (str == "YTD-APP") {
    return DEStringLit(DEStringCase::DSTRING_YTD_APP);
  }
  if (str == "YTD-BROWSE") {
    return DEStringLit(DEStringCase::DSTRING_YTD_BROWSE);
  }
  if (str == "YTD-BUTTON-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_BUTTON_RENDERER);
  }
  if (str == "YTD-CHANNEL-NAME") {
    return DEStringLit(DEStringCase::DSTRING_YTD_CHANNEL_NAME);
  }
  if (str == "YTD-FEED-NUDGE-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_FEED_NUDGE_RENDERER);
  }
  if (str == "YTD-GUIDE-ENTRY-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_GUIDE_ENTRY_RENDERER);
  }
  if (str == "YTD-GUIDE-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_GUIDE_RENDERER);
  }
  if (str == "YTD-GUIDE-SECTION-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_GUIDE_SECTION_RENDERER);
  }
  if (str == "YTD-GUIDE-SIGNIN-PROMO-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_GUIDE_SIGNIN_PROMO_RENDERER);
  }
  if (str == "YTD-LOGO") {
    return DEStringLit(DEStringCase::DSTRING_YTD_LOGO);
  }
  if (str == "YTD-LOTTIE-PLAYER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_LOTTIE_PLAYER);
  }
  if (str == "YTD-MASTHEAD") {
    return DEStringLit(DEStringCase::DSTRING_YTD_MASTHEAD);
  }
  if (str == "YTD-METADATA-ROW-CONTAINER-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_METADATA_ROW_CONTAINER_RENDERER);
  }
  if (str == "YTD-MINI-GUIDE-ENTRY-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_MINI_GUIDE_ENTRY_RENDERER);
  }
  if (str == "YTD-MINI-GUIDE-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_MINI_GUIDE_RENDERER);
  }
  if (str == "YTD-MINIPLAYER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_MINIPLAYER);
  }
  if (str == "YTD-MINIPLAYER-TOAST") {
    return DEStringLit(DEStringCase::DSTRING_YTD_MINIPLAYER_TOAST);
  }
  if (str == "YTD-PAGE-MANAGER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_PAGE_MANAGER);
  }
  if (str == "YTD-PERMISSION-ROLE-BOTTOM-BAR-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_PERMISSION_ROLE_BOTTOM_BAR_RENDERER);
  }
  if (str == "YTD-PLAYER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_PLAYER);
  }
  if (str == "YTD-POPUP-CONTAINER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_POPUP_CONTAINER);
  }
  if (str == "YTD-RICH-GRID-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_RICH_GRID_RENDERER);
  }
  if (str == "YTD-RICH-SECTION-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_RICH_SECTION_RENDERER);
  }
  if (str == "YTD-SEARCHBOX") {
    return DEStringLit(DEStringCase::DSTRING_YTD_SEARCHBOX);
  }
  if (str == "YTD-STRUCTURED-DESCRIPTION-CONTENT-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_STRUCTURED_DESCRIPTION_CONTENT_RENDERER);
  }
  if (str == "YTD-TEXT-INLINE-EXPANDER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_TEXT_INLINE_EXPANDER);
  }
  if (str == "YTD-THIRD-PARTY-MANAGER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_THIRD_PARTY_MANAGER);
  }
  if (str == "YTD-THUMBNAIL") {
    return DEStringLit(DEStringCase::DSTRING_YTD_THUMBNAIL);
  }
  if (str == "YTD-TOPBAR-LOGO-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_TOPBAR_LOGO_RENDERER);
  }
  if (str == "YTD-TOPBAR-MENU-BUTTON-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_TOPBAR_MENU_BUTTON_RENDERER);
  }
  if (str == "YTD-TWO-COLUMN-BROWSE-RESULTS-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_TWO_COLUMN_BROWSE_RESULTS_RENDERER);
  }
  if (str == "YTD-VIDEO-OWNER-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_VIDEO_OWNER_RENDERER);
  }
  if (str == "YTD-VIDEO-PRIMARY-INFO-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_VIDEO_PRIMARY_INFO_RENDERER);
  }
  if (str == "YTD-WATCH-INFO-TEXT") {
    return DEStringLit(DEStringCase::DSTRING_YTD_WATCH_INFO_TEXT);
  }
  if (str == "YTD-WATCH-METADATA") {
    return DEStringLit(DEStringCase::DSTRING_YTD_WATCH_METADATA);
  }
  if (str == "YTD-WATCH-NEXT-SECONDARY-RESULTS-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_WATCH_NEXT_SECONDARY_RESULTS_RENDERER);
  }
  if (str == "YTD-YOODLE-RENDERER") {
    return DEStringLit(DEStringCase::DSTRING_YTD_YOODLE_RENDERER);
  }
  if (str == "absolute") {
    return DEStringLit(DEStringCase::DSTRING_absolute);
  }
  if (str == "auto") {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
  if (str == "block") {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
  if (str == "column") {
    return DEStringLit(DEStringCase::DSTRING_column);
  }
  if (str == "column-reverse") {
    return DEStringLit(DEStringCase::DSTRING_column_reverse);
  }
  if (str == "contents") {
    return DEStringLit(DEStringCase::DSTRING_contents);
  }
  if (str == "fit-content") {
    return DEStringLit(DEStringCase::DSTRING_fit_content);
  }
  if (str == "flex") {
    return DEStringLit(DEStringCase::DSTRING_flex);
  }
  if (str == "grid") {
    return DEStringLit(DEStringCase::DSTRING_grid);
  }
  if (str == "html") {
    return DEStringLit(DEStringCase::DSTRING_html);
  }
  if (str == "inline") {
    return DEStringLit(DEStringCase::DSTRING_inline);
  }
  if (str == "inline-block") {
    return DEStringLit(DEStringCase::DSTRING_inline_block);
  }
  if (str == "inline-flex") {
    return DEStringLit(DEStringCase::DSTRING_inline_flex);
  }
  if (str == "inline-grid") {
    return DEStringLit(DEStringCase::DSTRING_inline_grid);
  }
  if (str == "list-item") {
    return DEStringLit(DEStringCase::DSTRING_list_item);
  }
  if (str == "max-content") {
    return DEStringLit(DEStringCase::DSTRING_max_content);
  }
  if (str == "min-content") {
    return DEStringLit(DEStringCase::DSTRING_min_content);
  }
  if (str == "none") {
    return DEStringLit(DEStringCase::DSTRING_none);
  }
  if (str == "row") {
    return DEStringLit(DEStringCase::DSTRING_row);
  }
  if (str == "row-reverse") {
    return DEStringLit(DEStringCase::DSTRING_row_reverse);
  }
  if (str == "static") {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
  if (str == "svg") {
    return DEStringLit(DEStringCase::DSTRING_svg);
  }
  if (str == "table") {
    return DEStringLit(DEStringCase::DSTRING_table);
  }
  if (str == "table-cell") {
    return DEStringLit(DEStringCase::DSTRING_table_cell);
  }
  if (str == "table-header-group") {
    return DEStringLit(DEStringCase::DSTRING_table_header_group);
  }
  if (str == "table-row") {
    return DEStringLit(DEStringCase::DSTRING_table_row);
  }
  if (str == "table-row-group") {
    return DEStringLit(DEStringCase::DSTRING_table_row_group);
  }
  if (std_has_suffix(str, "%")) {
    return DEString{DEStringCase::DHasSuffix_PERCENTAGE, StringToDEStringRest(std_strip_suffix(str, "%"))};
  }
  if (std_has_suffix(str, "ch")) {
    return DEString{DEStringCase::DHasSuffix_ch, StringToDEStringRest(std_strip_suffix(str, "ch"))};
  }
  if (std_has_suffix(str, "em")) {
    return DEString{DEStringCase::DHasSuffix_em, StringToDEStringRest(std_strip_suffix(str, "em"))};
  }
  if (std_has_suffix(str, "lh")) {
    return DEString{DEStringCase::DHasSuffix_lh, StringToDEStringRest(std_strip_suffix(str, "lh"))};
  }
  if (std_has_suffix(str, "px")) {
    return DEString{DEStringCase::DHasSuffix_px, StringToDEStringRest(std_strip_suffix(str, "px"))};
  }
  if (std_string_is_float(str)) {
    return DEString{DEStringCase::DStringIsFloat, StringToDEStringRest(str)};
  }
  if (std_has_prefix(str, "calc")) {
    return DEString{DEStringCase::DHasPrefix_calc, StringToDEStringRest(std_strip_prefix(str, "calc"))};
  }
  return DEStringLit(DEStringCase::DEStringCaseDefault);
}
Value JsonToValue(const json &j) {
  if (j.is_string()) {
    return Value(StringToDEString(JsonToString(j)));
  } else if (j.is_number_integer()) {
    return Value(JsonToInt(j));
  } else {
    std::cout << "JsonToValue:" << std::endl;
    assert(false);
  }
}
std::unordered_map<std::string, Value> JsonToDict(const json &j) {
  std::unordered_map<std::string, Value> ret;
  for (auto &[key, val] : j.items()) {
    ret.insert({key, JsonToValue(val)});
  }
  return ret;
}

struct Content : std::enable_shared_from_this<Content> {
  Content *parent = nullptr;
  Content *prev = nullptr;
  Content *next = nullptr;
  Content *first = nullptr;
  Content *last = nullptr;
  int64_t extern_id;
  List<Node> children;
  DEString name;
  Meta m;
  Meta *meta = &m;
  Content(const DEString &name, const std::unordered_map<std::string, Value> &attr,
          const std::unordered_map<std::string, Value> &prop, int64_t extern_id, const List<Node> &children)
      : name(name), extern_id(extern_id), children(children) {
    if (attr.count("width") == 1) {
      has_attr_width = true;
      attr_width = AsDEString(attr.at("width"));
    }
    if (attr.count("image_height") == 1) {
      has_attr_image_height = true;
      attr_image_height = Asint64_t(attr.at("image_height"));
    }
    if (attr.count("image_width") == 1) {
      has_attr_image_width = true;
      attr_image_width = Asint64_t(attr.at("image_width"));
    }
    if (attr.count("height") == 1) {
      has_attr_height = true;
      attr_height = AsDEString(attr.at("height"));
    }
    if (attr.count("viewBox") == 1) {
      has_attr_viewBox = true;
      attr_viewBox = AsDEString(attr.at("viewBox"));
    }
    if (prop.count("width") == 1) {
      has_prop_width = true;
      prop_width = AsDEString(prop.at("width"));
    }
    if (prop.count("flex-grow") == 1) {
      has_prop_flex_grow = true;
      prop_flex_grow = AsDEString(prop.at("flex-grow"));
    }
    if (prop.count("height") == 1) {
      has_prop_height = true;
      prop_height = AsDEString(prop.at("height"));
    }
    if (prop.count("display") == 1) {
      has_prop_display = true;
      prop_display = AsDEString(prop.at("display"));
    }
    if (prop.count("position") == 1) {
      has_prop_position = true;
      prop_position = AsDEString(prop.at("position"));
    }
    if (prop.count("flex-shrink") == 1) {
      has_prop_flex_shrink = true;
      prop_flex_shrink = AsDEString(prop.at("flex-shrink"));
    }
    if (prop.count("flex-direction") == 1) {
      has_prop_flex_direction = true;
      prop_flex_direction = AsDEString(prop.at("flex-direction"));
    }
  }
  bool var_visible;
  bool has_var_visible = false;
  bool var_inside_svg;
  bool has_var_inside_svg = false;
  DEString var_height_expr;
  bool has_var_height_expr = false;
  double var_flex_grow_sum;
  bool has_var_flex_grow_sum = false;
  double var_intrinsic_width_max;
  bool has_var_intrinsic_width_max = false;
  double var_x;
  bool has_var_x = false;
  double var_left_over;
  bool has_var_left_over = false;
  double var_y;
  bool has_var_y = false;
  bool var_is_svg_block;
  bool has_var_is_svg_block = false;
  double var_intrinsic_current_line_width;
  bool has_var_intrinsic_current_line_width = false;
  bool var_is_default_case;
  bool has_var_is_default_case = false;
  double var_finished_intrinsic_height_sum;
  bool has_var_finished_intrinsic_height_sum = false;
  double var_flex_grow;
  bool has_var_flex_grow = false;
  double var_flex_amount;
  bool has_var_flex_amount = false;
  double var_children_intrinsic_height;
  bool has_var_children_intrinsic_height = false;
  double var_height_internal;
  bool has_var_height_internal = false;
  double var_width_external;
  bool has_var_width_external = false;
  double var_intrinsic_current_line_height;
  bool has_var_intrinsic_current_line_height = false;
  double var_intrinsic_width_external;
  bool has_var_intrinsic_width_external = false;
  double var_flex_unit;
  bool has_var_flex_unit = false;
  double var_intrinsic_height_internal;
  bool has_var_intrinsic_height_internal = false;
  DEString var_flex_direction;
  bool has_var_flex_direction = false;
  double var_children_intrinsic_width;
  bool has_var_children_intrinsic_width = false;
  double var_box_width;
  bool has_var_box_width = false;
  double var_intrinsic_height_sum;
  bool has_var_intrinsic_height_sum = false;
  bool var_intrinsic_height_is_height;
  bool has_var_intrinsic_height_is_height = false;
  bool var_intrinsic_width_is_width;
  bool has_var_intrinsic_width_is_width = false;
  DEString var_display;
  bool has_var_display = false;
  double var_box_height;
  bool has_var_box_height = false;
  bool var_is_flex_row;
  bool has_var_is_flex_row = false;
  double var_flex_shrink_sum;
  bool has_var_flex_shrink_sum = false;
  double var_intrinsic_width_sum;
  bool has_var_intrinsic_width_sum = false;
  double var_line_height;
  bool has_var_line_height = false;
  bool var_is_flex_column;
  bool has_var_is_flex_column = false;
  bool var_has_width_attr;
  bool has_var_has_width_attr = false;
  double var_width_internal;
  bool has_var_width_internal = false;
  bool var_line_break;
  bool has_var_line_break = false;
  double var_intrinsic_height_external;
  bool has_var_intrinsic_height_external = false;
  bool var_has_height_attr;
  bool has_var_has_height_attr = false;
  double var_flex_shrink;
  bool has_var_flex_shrink = false;
  bool var_disabled;
  bool has_var_disabled = false;
  DEString var_position;
  bool has_var_position = false;
  double var_width_attr;
  bool has_var_width_attr = false;
  double var_height_external;
  bool has_var_height_external = false;
  DEString var_width_expr;
  bool has_var_width_expr = false;
  double var_height_attr;
  bool has_var_height_attr = false;
  double var_intrinsic_width_internal;
  bool has_var_intrinsic_width_internal = false;
  DEString attr_width;
  bool has_attr_width = false;
  int64_t attr_image_height;
  bool has_attr_image_height = false;
  int64_t attr_image_width;
  bool has_attr_image_width = false;
  DEString attr_height;
  bool has_attr_height = false;
  DEString attr_viewBox;
  bool has_attr_viewBox = false;
  DEString prop_width;
  bool has_prop_width = false;
  DEString prop_flex_grow;
  bool has_prop_flex_grow = false;
  DEString prop_height;
  bool has_prop_height = false;
  DEString prop_display;
  bool has_prop_display = false;
  DEString prop_position;
  bool has_prop_position = false;
  DEString prop_flex_shrink;
  bool has_prop_flex_shrink = false;
  DEString prop_flex_direction;
  bool has_prop_flex_direction = false;
};
#include "header_continued.h"
Unit var_modified_x_468(const auto &x_476);
auto eval_expr_x_465(const auto &x_481);
Unit var_modified_x_463(const auto &x_491);
auto eval_expr_x_460(const auto &x_494);
Unit var_modified_x_458(const auto &x_500);
auto eval_expr_x_455(const auto &x_504);
Unit var_modified_x_453(const auto &x_532);
auto eval_expr_x_450(const auto &x_538);
Unit var_modified_x_448(const auto &x_552);
auto eval_expr_x_445(const auto &x_557);
Unit var_modified_x_443(const auto &x_563);
auto eval_expr_x_440(const auto &x_567);
Unit var_modified_x_438(const auto &x_595);
auto eval_expr_x_435(const auto &x_601);
Unit var_modified_x_433(const auto &x_613);
auto eval_expr_x_430(const auto &x_616);
Unit var_modified_x_428(const auto &x_628);
auto eval_expr_x_425(const auto &x_631);
Unit var_modified_x_423(const auto &x_639);
auto eval_expr_x_420(const auto &x_643);
Unit var_modified_x_418(const auto &x_655);
auto eval_expr_x_415(const auto &x_658);
Unit var_modified_x_413(const auto &x_662);
auto eval_expr_x_410(const auto &x_665);
Unit var_modified_x_406(const auto &x_669);
auto eval_expr_x_403(const auto &x_679);
Unit var_modified_x_401(const auto &x_729);
auto eval_expr_x_398(const auto &x_732);
Unit var_modified_x_396(const auto &x_742);
auto eval_expr_x_393(const auto &x_747);
Unit var_modified_x_391(const auto &x_751);
auto eval_expr_x_388(const auto &x_756);
Unit var_modified_x_386(const auto &x_762);
auto eval_expr_x_383(const auto &x_765);
Unit var_modified_x_381(const auto &x_767);
auto eval_expr_x_378(const auto &x_770);
Unit var_modified_x_376(const auto &x_788);
auto eval_expr_x_373(const auto &x_791);
Unit var_modified_x_371(const auto &x_815);
auto eval_expr_x_368(const auto &x_818);
Unit var_modified_x_366(const auto &x_836);
auto eval_expr_x_363(const auto &x_839);
Unit var_modified_x_361(const auto &x_863);
auto eval_expr_x_358(const auto &x_867);
Unit var_modified_x_356(const auto &x_883);
auto eval_expr_x_353(const auto &x_888);
Unit var_modified_x_351(const auto &x_904);
auto eval_expr_x_348(const auto &x_907);
Unit var_modified_x_346(const auto &x_911);
auto eval_expr_x_343(const auto &x_917);
Unit var_modified_x_341(const auto &x_923);
auto eval_expr_x_338(const auto &x_929);
Unit var_modified_x_336(const auto &x_935);
auto eval_expr_x_333(const auto &x_939);
Unit var_modified_x_331(const auto &x_943);
auto eval_expr_x_328(const auto &x_947);
Unit var_modified_x_326(const auto &x_951);
auto eval_expr_x_323(const auto &x_956);
Unit var_modified_x_321(const auto &x_960);
auto eval_expr_x_318(const auto &x_965);
Unit var_modified_x_315(const auto &x_969);
auto eval_expr_x_312(const auto &x_977);
Unit var_modified_x_310(const auto &x_993);
auto eval_expr_x_307(const auto &x_1001);
Unit var_modified_x_305(const auto &x_1009);
auto eval_expr_x_302(const auto &x_1017);
Unit var_modified_x_300(const auto &x_1023);
auto eval_expr_x_297(const auto &x_1026);
Unit var_modified_x_295(const auto &x_1032);
auto eval_expr_x_292(const auto &x_1036);
Unit var_modified_x_290(const auto &x_1120);
auto eval_expr_x_287(const auto &x_1123);
Unit var_modified_x_285(const auto &x_1153);
auto eval_expr_x_282(const auto &x_1157);
Unit var_modified_x_280(const auto &x_1161);
auto eval_expr_x_277(const auto &x_1164);
Unit var_modified_x_275(const auto &x_1170);
auto eval_expr_x_272(const auto &x_1178);
Unit var_modified_x_270(const auto &x_1184);
auto eval_expr_x_267(const auto &x_1192);
Unit var_modified_x_265(const auto &x_1198);
auto eval_expr_x_262(const auto &x_1204);
Unit var_modified_x_260(const auto &x_1212);
auto eval_expr_x_257(const auto &x_1215);
Unit var_modified_x_255(const auto &x_1221);
auto eval_expr_x_252(const auto &x_1225);
Unit var_modified_x_250(const auto &x_1307);
auto eval_expr_x_247(const auto &x_1310);
Unit var_modified_x_245(const auto &x_1314);
auto eval_expr_x_242(const auto &x_1317);
Unit var_modified_x_240(const auto &x_1345);
auto eval_expr_x_237(const auto &x_1348);
Unit var_modified_x_235(const auto &x_1356);
auto eval_expr_x_232(const auto &x_1360);
Unit eval_stmts_x_207(const auto &x_231);
Unit eval_stmts_x_203(const auto &x_317);
Unit eval_stmts_x_200(const auto &x_408);
Unit eval_stmts_x_196(const auto &x_409);
Unit x_470(const auto &x_471);
Unit x_473(const auto &x_474);
Unit x_45(const auto &x_46, const auto &x_47, const auto &x_48);
Unit x_52(const auto &x_53, const auto &x_54, const auto &x_55);
Unit x_59(const auto &x_60, const auto &x_61, const auto &x_62);
Unit x_66(const auto &x_67, const auto &x_68, const auto &x_69);
Unit x_77(const auto &x_78, const auto &x_79, const auto &x_80);
Unit x_86(const auto &x_87, const auto &x_88, const auto &x_89);
Unit x_97(const auto &x_98, const auto &x_99, const auto &x_100);
Unit x_133(const auto &x_134);
Unit x_141(const auto &x_142, const auto &x_143, const auto &x_144);
Unit recalculate_x_26(const auto &x_162);
Unit x_165(const auto &x_166, const auto &x_167, const auto &x_168);
Unit x_186(const auto &x_187);
Unit eval_stmts_x_19(const auto &x_194);
Unit eval_stmts_x_17(const auto &x_201);
Unit x_208(const auto &x_209);
int64_t x_216(const auto &x_217);
int64_t x_219(const auto &x_220);
LayoutNode x_222(const auto &x_223);
Node x_225(const auto &x_226);
Node x_228(const auto &x_229);
Unit var_modified_x_468(const auto &x_476) {
  return RecordOverhead([&](const auto &x_477) {
    OptionMatch(
        x_476->next, [&](const auto &x_479) { return MakeUnit(); },
        [&](const auto &x_478) {
          auto x_480 = x_478;
          if (x_480->meta->pass_1_proc_inited) {
            x_480->meta->bb_3_has_bb_dirtied = true;
            x_480->meta->bb_3_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_465(const auto &x_481) {
  return RecordEval([&](const auto &x_482) {
    if ((x_481->prev != nullptr) && (!(x_481->prev)->var_line_break)) {
      return max(x_481->var_height_external, (x_481->prev)->var_line_height);
    } else {
      return x_481->var_height_external;
    }
  });
}
Unit var_modified_x_463(const auto &x_491) {
  return RecordOverhead([&](const auto &x_492) {
    auto x_493 = x_491;
    if (x_493->meta->pass_1_proc_inited) {
      x_493->meta->bb_3_has_bb_dirtied = true;
      x_493->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_460(const auto &x_494) {
  return RecordEval([&](const auto &x_495) {
    if (eq(x_494->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_494->var_height_internal;
    }
  });
}
Unit var_modified_x_458(const auto &x_500) {
  return RecordOverhead([&](const auto &x_501) {
    auto x_502 = x_500;
    if (x_502->meta->pass_1_proc_inited) {
      x_502->meta->bb_3_has_bb_dirtied = true;
      x_502->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    ListIter(x_500->children, [&](const auto &x_503) {
      if (x_503->meta->pass_1_proc_inited) {
        x_503->meta->bb_3_has_bb_dirtied = true;
        x_503->meta->bb_3_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_455(const auto &x_504) {
  return RecordEval([&](const auto &x_505) {
    if (x_504->var_intrinsic_height_is_height) {
      return x_504->var_intrinsic_height_internal;
    } else {
      if ((x_504->parent != nullptr) && (x_504->parent)->var_is_flex_column) {
        return plus(x_504->var_intrinsic_height_internal, mult(x_504->var_flex_amount, (x_504->parent)->var_flex_unit));
      } else {
        if (x_504->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
          return mult(x_504->var_box_height, divide(x_504->var_height_expr.r.a0, 100.));
        } else {
          return max(x_504->var_box_height, x_504->var_intrinsic_height_internal);
        }
      }
    }
  });
}
Unit var_modified_x_453(const auto &x_532) {
  return RecordOverhead([&](const auto &x_533) {
    ListIter(x_532->children, [&](const auto &x_534) {
      if (x_534->meta->pass_1_proc_inited) {
        x_534->meta->bb_3_has_bb_dirtied = true;
        x_534->meta->bb_3_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    OptionMatch(
        x_532->next, [&](const auto &x_536) { return MakeUnit(); },
        [&](const auto &x_535) {
          auto x_537 = x_535;
          if (x_537->meta->pass_1_proc_inited) {
            x_537->meta->bb_3_has_bb_dirtied = true;
            x_537->meta->bb_3_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_450(const auto &x_538) {
  return RecordEval([&](const auto &x_539) {
    if (x_538->prev != nullptr) {
      if (x_538->var_line_break || (x_538->prev)->var_line_break) {
        return plus((x_538->prev)->var_y, (x_538->prev)->var_line_height);
      } else {
        return (x_538->prev)->var_y;
      }
    } else {
      if (x_538->parent != nullptr) {
        return (x_538->parent)->var_y;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_448(const auto &x_552) {
  return RecordOverhead([&](const auto &x_553) {
    OptionMatch(
        x_552->next, [&](const auto &x_555) { return MakeUnit(); },
        [&](const auto &x_554) {
          auto x_556 = x_554;
          if (x_556->meta->pass_1_proc_inited) {
            x_556->meta->bb_3_has_bb_dirtied = true;
            x_556->meta->bb_3_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_445(const auto &x_557) {
  return RecordEval([&](const auto &x_558) {
    if (eq(x_557->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_557->var_width_internal;
    }
  });
}
Unit var_modified_x_443(const auto &x_563) {
  return RecordOverhead([&](const auto &x_564) {
    auto x_565 = x_563;
    if (x_565->meta->pass_1_proc_inited) {
      x_565->meta->bb_3_has_bb_dirtied = true;
      x_565->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    ListIter(x_563->children, [&](const auto &x_566) {
      if (x_566->meta->pass_1_proc_inited) {
        x_566->meta->bb_3_has_bb_dirtied = true;
        x_566->meta->bb_3_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_440(const auto &x_567) {
  return RecordEval([&](const auto &x_568) {
    if (x_567->var_intrinsic_width_is_width) {
      return x_567->var_intrinsic_width_internal;
    } else {
      if ((x_567->parent != nullptr) && (x_567->parent)->var_is_flex_row) {
        return plus(x_567->var_intrinsic_width_internal, mult(x_567->var_flex_amount, (x_567->parent)->var_flex_unit));
      } else {
        if (x_567->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
          return mult(x_567->var_box_width, divide(x_567->var_width_expr.r.a0, 100.));
        } else {
          return max(x_567->var_box_width, x_567->var_intrinsic_width_internal);
        }
      }
    }
  });
}
Unit var_modified_x_438(const auto &x_595) {
  return RecordOverhead([&](const auto &x_596) {
    ListIter(x_595->children, [&](const auto &x_597) {
      if (x_597->meta->pass_1_proc_inited) {
        x_597->meta->bb_3_has_bb_dirtied = true;
        x_597->meta->bb_3_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    OptionMatch(
        x_595->next, [&](const auto &x_599) { return MakeUnit(); },
        [&](const auto &x_598) {
          auto x_600 = x_598;
          if (x_600->meta->pass_1_proc_inited) {
            x_600->meta->bb_3_has_bb_dirtied = true;
            x_600->meta->bb_3_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_435(const auto &x_601) {
  return RecordEval([&](const auto &x_602) {
    if (x_601->prev != nullptr) {
      if (x_601->var_line_break || (x_601->prev)->var_line_break) {
        return 0.;
      } else {
        return plus((x_601->prev)->var_x, (x_601->prev)->var_width_external);
      }
    } else {
      if (x_601->parent != nullptr) {
        return (x_601->parent)->var_x;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_433(const auto &x_613) {
  return RecordOverhead([&](const auto &x_614) {
    ListIter(x_613->children, [&](const auto &x_615) {
      if (x_615->meta->pass_1_proc_inited) {
        x_615->meta->bb_3_has_bb_dirtied = true;
        x_615->meta->bb_3_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_430(const auto &x_616) {
  return RecordEval([&](const auto &x_617) {
    if (gt(x_616->var_left_over, 0.)) {
      return divide(x_616->var_left_over, x_616->var_flex_grow_sum);
    } else {
      return divide(x_616->var_left_over, x_616->var_flex_shrink_sum);
    }
  });
}
Unit var_modified_x_428(const auto &x_628) {
  return RecordOverhead([&](const auto &x_629) {
    auto x_630 = x_628;
    if (x_630->meta->pass_1_proc_inited) {
      x_630->meta->bb_3_has_bb_dirtied = true;
      x_630->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_425(const auto &x_631) {
  return RecordEval([&](const auto &x_632) {
    if ((x_631->parent != nullptr) && gt((x_631->parent)->var_left_over, 0.)) {
      return x_631->var_flex_grow;
    } else {
      return x_631->var_flex_shrink;
    }
  });
}
Unit var_modified_x_423(const auto &x_639) {
  return RecordOverhead([&](const auto &x_640) {
    auto x_641 = x_639;
    if (x_641->meta->pass_1_proc_inited) {
      x_641->meta->bb_3_has_bb_dirtied = true;
      x_641->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    ListIter(x_639->children, [&](const auto &x_642) {
      if (x_642->meta->pass_1_proc_inited) {
        x_642->meta->bb_3_has_bb_dirtied = true;
        x_642->meta->bb_3_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_420(const auto &x_643) {
  return RecordEval([&](const auto &x_644) {
    if (x_643->var_is_flex_row) {
      return minus(x_643->var_box_width, (x_643->last != nullptr) ? ((x_643->last)->var_intrinsic_width_sum) : (0.));
    } else {
      return minus(x_643->var_box_height, (x_643->last != nullptr) ? ((x_643->last)->var_intrinsic_height_sum) : (0.));
    }
  });
}
Unit var_modified_x_418(const auto &x_655) {
  return RecordOverhead([&](const auto &x_656) {
    auto x_657 = x_655;
    if (x_657->meta->pass_1_proc_inited) {
      x_657->meta->bb_3_has_bb_dirtied = true;
      x_657->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_415(const auto &x_658) {
  return RecordEval([&](const auto &x_659) {
    if (x_658->parent != nullptr) {
      return (x_658->parent)->var_height_internal;
    } else {
      return 1080.;
    }
  });
}
Unit var_modified_x_413(const auto &x_662) {
  return RecordOverhead([&](const auto &x_663) {
    auto x_664 = x_662;
    if (x_664->meta->pass_1_proc_inited) {
      x_664->meta->bb_3_has_bb_dirtied = true;
      x_664->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_410(const auto &x_665) {
  return RecordEval([&](const auto &x_666) {
    if (x_665->parent != nullptr) {
      return (x_665->parent)->var_width_internal;
    } else {
      return 1920.;
    }
  });
}
Unit var_modified_x_406(const auto &x_669) {
  return RecordOverhead([&](const auto &x_670) {
    auto x_671 = x_669;
    if (x_671->meta->pass_0_proc_inited) {
      x_671->meta->bb_0_has_bb_dirtied = true;
      x_671->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    OptionMatch(
        x_669->next, [&](const auto &x_673) { return MakeUnit(); },
        [&](const auto &x_672) {
          auto x_674 = x_672;
          if (x_674->meta->pass_0_proc_inited) {
            x_674->meta->bb_0_has_bb_dirtied = true;
            x_674->meta->bb_0_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    auto x_675 = x_669;
    if (x_675->meta->pass_1_proc_inited) {
      x_675->meta->bb_3_has_bb_dirtied = true;
      x_675->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    OptionMatch(
        x_669->next, [&](const auto &x_677) { return MakeUnit(); },
        [&](const auto &x_676) {
          auto x_678 = x_676;
          if (x_678->meta->pass_1_proc_inited) {
            x_678->meta->bb_3_has_bb_dirtied = true;
            x_678->meta->bb_3_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_403(const auto &x_679) {
  return RecordEval([&](const auto &x_680) {
    if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return false;
    } else {
      if (eq(x_679->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
        return false;
      } else {
        if ((x_679->parent != nullptr) &&
            (eq((x_679->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
             eq((x_679->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
          return true;
        } else {
          if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
            return true;
          } else {
            if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
              return false;
            } else {
              if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
                return false;
              } else {
                if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_inline_grid))) {
                  return false;
                } else {
                  if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                    if (eq(x_679->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                      return false;
                    } else {
                      if (eq(x_679->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                        return false;
                      } else {
                        if (eq(x_679->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                          return true;
                        } else {
                          return true;
                        }
                      }
                    }
                  } else {
                    if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                      return false;
                    } else {
                      if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                        return false;
                      } else {
                        if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                          return true;
                        } else {
                          if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                            return true;
                          } else {
                            if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_table_header_group))) {
                              return true;
                            } else {
                              if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                                return true;
                              } else {
                                if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                                  return false;
                                } else {
                                  if (eq(x_679->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
                                    return true;
                                  } else {
                                    return true;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  });
}
Unit var_modified_x_401(const auto &x_729) {
  return RecordOverhead([&](const auto &x_730) {
    ListIter(x_729->children, [&](const auto &x_731) {
      if (x_731->meta->pass_0_proc_inited) {
        x_731->meta->bb_1_has_bb_dirtied = true;
        x_731->meta->bb_1_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_398(const auto &x_732) {
  return RecordEval([&](const auto &x_733) {
    return (((!(x_732->parent != nullptr)) || (x_732->parent)->var_visible) &&
            (neq(x_732->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
             ((!x_732->var_inside_svg) && (!x_732->var_disabled))));
  });
}
Unit var_modified_x_396(const auto &x_742) {
  return RecordOverhead([&](const auto &x_743) {
    auto x_744 = x_742;
    if (x_744->meta->pass_0_proc_inited) {
      x_744->meta->bb_1_has_bb_dirtied = true;
      x_744->meta->bb_1_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    ListIter(x_742->children, [&](const auto &x_745) {
      if (x_745->meta->pass_0_proc_inited) {
        x_745->meta->bb_1_has_bb_dirtied = true;
        x_745->meta->bb_1_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_746 = x_742;
    if (x_746->meta->pass_0_proc_inited) {
      x_746->meta->bb_0_has_bb_dirtied = true;
      x_746->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_393(const auto &x_747) {
  return RecordEval([&](const auto &x_748) {
    if (eq(x_747->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
      return true;
    } else {
      return ((x_747->parent != nullptr) && (x_747->parent)->var_disabled);
    }
  });
}
Unit var_modified_x_391(const auto &x_751) {
  return RecordOverhead([&](const auto &x_752) {
    auto x_753 = x_751;
    if (x_753->meta->pass_0_proc_inited) {
      x_753->meta->bb_1_has_bb_dirtied = true;
      x_753->meta->bb_1_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    ListIter(x_751->children, [&](const auto &x_754) {
      if (x_754->meta->pass_0_proc_inited) {
        x_754->meta->bb_1_has_bb_dirtied = true;
        x_754->meta->bb_1_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_755 = x_751;
    if (x_755->meta->pass_0_proc_inited) {
      x_755->meta->bb_0_has_bb_dirtied = true;
      x_755->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_388(const auto &x_756) {
  return RecordEval([&](const auto &x_757) {
    return ((x_756->parent != nullptr) && ((x_756->parent)->var_is_svg_block || (x_756->parent)->var_inside_svg));
  });
}
Unit var_modified_x_386(const auto &x_762) {
  return RecordOverhead([&](const auto &x_763) {
    ListIter(x_762->children, [&](const auto &x_764) {
      if (x_764->meta->pass_0_proc_inited) {
        x_764->meta->bb_1_has_bb_dirtied = true;
        x_764->meta->bb_1_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_383(const auto &x_765) {
  return RecordEval([&](const auto &x_766) { return eq(x_765->name, DEStringLit(DEStringCase::DSTRING_svg)); });
}
Unit var_modified_x_381(const auto &x_767) {
  return RecordOverhead([&](const auto &x_768) {
    auto x_769 = x_767;
    if (x_769->meta->pass_0_proc_inited) {
      x_769->meta->bb_0_has_bb_dirtied = true;
      x_769->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_378(const auto &x_770) {
  return RecordEval([&](const auto &x_771) {
    if (!x_770->has_attr_height) {
      return false;
    } else {
      if (x_770->attr_height.c == DEStringCase::DStringIsFloat) {
        return true;
      } else {
        if (x_770->attr_height.c == DEStringCase::DHasSuffix_px) {
          return true;
        } else {
          if (x_770->attr_height.c == DEStringCase::DHasSuffix_em) {
            return true;
          } else {
            if (eq(x_770->attr_height, DEStringLit(DEStringCase::DSTRING_Auto))) {
              return false;
            } else {
              if (eq(x_770->attr_height, DEStringLit(DEStringCase::DSTRING_auto))) {
                return false;
              } else {
                if (eq(x_770->attr_height, DEStringLit(DEStringCase::DSTRING_100PERCENTAGE))) {
                  return false;
                } else {
                  return false;
                }
              }
            }
          }
        }
      }
    }
  });
}
Unit var_modified_x_376(const auto &x_788) {
  return RecordOverhead([&](const auto &x_789) {
    auto x_790 = x_788;
    if (x_790->meta->pass_0_proc_inited) {
      x_790->meta->bb_0_has_bb_dirtied = true;
      x_790->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_373(const auto &x_791) {
  return RecordEval([&](const auto &x_792) {
    if (!x_791->has_attr_height) {
      return 0.;
    } else {
      if (x_791->attr_height.c == DEStringCase::DStringIsFloat) {
        return (x_791->attr_height.r.a0);
      } else {
        if (x_791->attr_height.c == DEStringCase::DHasSuffix_px) {
          return x_791->attr_height.r.a0;
        } else {
          if (x_791->attr_height.c == DEStringCase::DHasSuffix_em) {
            return x_791->attr_height.r.a0;
          } else {
            if (eq(x_791->attr_height, DEStringLit(DEStringCase::DSTRING_Auto))) {
              return 0.;
            } else {
              if (eq(x_791->attr_height, DEStringLit(DEStringCase::DSTRING_auto))) {
                return 0.;
              } else {
                if (eq(x_791->attr_height, DEStringLit(DEStringCase::DSTRING_100PERCENTAGE))) {
                  return 0.;
                } else {
                  return 0.;
                }
              }
            }
          }
        }
      }
    }
  });
}
Unit var_modified_x_371(const auto &x_815) {
  return RecordOverhead([&](const auto &x_816) {
    auto x_817 = x_815;
    if (x_817->meta->pass_0_proc_inited) {
      x_817->meta->bb_0_has_bb_dirtied = true;
      x_817->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_368(const auto &x_818) {
  return RecordEval([&](const auto &x_819) {
    if (!x_818->has_attr_width) {
      return false;
    } else {
      if (x_818->attr_width.c == DEStringCase::DStringIsFloat) {
        return true;
      } else {
        if (x_818->attr_width.c == DEStringCase::DHasSuffix_px) {
          return true;
        } else {
          if (x_818->attr_width.c == DEStringCase::DHasSuffix_em) {
            return true;
          } else {
            if (eq(x_818->attr_width, DEStringLit(DEStringCase::DSTRING_Auto))) {
              return false;
            } else {
              if (eq(x_818->attr_width, DEStringLit(DEStringCase::DSTRING_auto))) {
                return false;
              } else {
                if (eq(x_818->attr_width, DEStringLit(DEStringCase::DSTRING_100PERCENTAGE))) {
                  return false;
                } else {
                  return false;
                }
              }
            }
          }
        }
      }
    }
  });
}
Unit var_modified_x_366(const auto &x_836) {
  return RecordOverhead([&](const auto &x_837) {
    auto x_838 = x_836;
    if (x_838->meta->pass_0_proc_inited) {
      x_838->meta->bb_0_has_bb_dirtied = true;
      x_838->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_363(const auto &x_839) {
  return RecordEval([&](const auto &x_840) {
    if (!x_839->has_attr_width) {
      return 0.;
    } else {
      if (x_839->attr_width.c == DEStringCase::DStringIsFloat) {
        return (x_839->attr_width.r.a0);
      } else {
        if (x_839->attr_width.c == DEStringCase::DHasSuffix_px) {
          return x_839->attr_width.r.a0;
        } else {
          if (x_839->attr_width.c == DEStringCase::DHasSuffix_em) {
            return x_839->attr_width.r.a0;
          } else {
            if (eq(x_839->attr_width, DEStringLit(DEStringCase::DSTRING_Auto))) {
              return 0.;
            } else {
              if (eq(x_839->attr_width, DEStringLit(DEStringCase::DSTRING_auto))) {
                return 0.;
              } else {
                if (eq(x_839->attr_width, DEStringLit(DEStringCase::DSTRING_100PERCENTAGE))) {
                  return 0.;
                } else {
                  return 0.;
                }
              }
            }
          }
        }
      }
    }
  });
}
Unit var_modified_x_361(const auto &x_863) {
  return RecordOverhead([&](const auto &x_864) {
    ListIter(x_863->children, [&](const auto &x_865) {
      if (x_865->meta->pass_0_proc_inited) {
        x_865->meta->bb_0_has_bb_dirtied = true;
        x_865->meta->bb_0_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    ListIter(x_863->children, [&](const auto &x_866) {
      if (x_866->meta->pass_1_proc_inited) {
        x_866->meta->bb_3_has_bb_dirtied = true;
        x_866->meta->bb_3_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_358(const auto &x_867) {
  return RecordEval([&](const auto &x_868) {
    if ((x_867->parent != nullptr) &&
        (eq((x_867->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
         eq((x_867->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
      if (eq((x_867->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
          eq((x_867->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  });
}
Unit var_modified_x_356(const auto &x_883) {
  return RecordOverhead([&](const auto &x_884) {
    ListIter(x_883->children, [&](const auto &x_885) {
      if (x_885->meta->pass_0_proc_inited) {
        x_885->meta->bb_0_has_bb_dirtied = true;
        x_885->meta->bb_0_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_886 = x_883;
    if (x_886->meta->pass_1_proc_inited) {
      x_886->meta->bb_3_has_bb_dirtied = true;
      x_886->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    ListIter(x_883->children, [&](const auto &x_887) {
      if (x_887->meta->pass_1_proc_inited) {
        x_887->meta->bb_3_has_bb_dirtied = true;
        x_887->meta->bb_3_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_353(const auto &x_888) {
  return RecordEval([&](const auto &x_889) {
    if ((x_888->parent != nullptr) &&
        (eq((x_888->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
         eq((x_888->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
      if (eq((x_888->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
          eq((x_888->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  });
}
Unit var_modified_x_351(const auto &x_904) {
  return RecordOverhead([&](const auto &x_905) {
    ListIter(x_904->children, [&](const auto &x_906) {
      if (x_906->meta->pass_0_proc_inited) {
        x_906->meta->bb_1_has_bb_dirtied = true;
        x_906->meta->bb_1_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_348(const auto &x_907) {
  return RecordEval([&](const auto &x_908) {
    if (x_907->has_prop_flex_direction) {
      return x_907->prop_flex_direction;
    } else {
      return DEStringLit(DEStringCase::DSTRING_);
    }
  });
}
Unit var_modified_x_346(const auto &x_911) {
  return RecordOverhead([&](const auto &x_912) {
    OptionMatch(
        x_911->next, [&](const auto &x_914) { return MakeUnit(); },
        [&](const auto &x_913) {
          auto x_915 = x_913;
          if (x_915->meta->pass_0_proc_inited) {
            x_915->meta->bb_1_has_bb_dirtied = true;
            x_915->meta->bb_1_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    auto x_916 = x_911;
    if (x_916->meta->pass_1_proc_inited) {
      x_916->meta->bb_3_has_bb_dirtied = true;
      x_916->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_343(const auto &x_917) {
  return RecordEval([&](const auto &x_918) {
    return plus((x_917->prev != nullptr) ? ((x_917->prev)->var_flex_shrink_sum) : (0.), x_917->var_flex_shrink);
  });
}
Unit var_modified_x_341(const auto &x_923) {
  return RecordOverhead([&](const auto &x_924) {
    OptionMatch(
        x_923->next, [&](const auto &x_926) { return MakeUnit(); },
        [&](const auto &x_925) {
          auto x_927 = x_925;
          if (x_927->meta->pass_0_proc_inited) {
            x_927->meta->bb_1_has_bb_dirtied = true;
            x_927->meta->bb_1_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    auto x_928 = x_923;
    if (x_928->meta->pass_1_proc_inited) {
      x_928->meta->bb_3_has_bb_dirtied = true;
      x_928->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_338(const auto &x_929) {
  return RecordEval([&](const auto &x_930) {
    return plus((x_929->prev != nullptr) ? ((x_929->prev)->var_flex_grow_sum) : (0.), x_929->var_flex_grow);
  });
}
Unit var_modified_x_336(const auto &x_935) {
  return RecordOverhead([&](const auto &x_936) {
    auto x_937 = x_935;
    if (x_937->meta->pass_0_proc_inited) {
      x_937->meta->bb_1_has_bb_dirtied = true;
      x_937->meta->bb_1_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    auto x_938 = x_935;
    if (x_938->meta->pass_1_proc_inited) {
      x_938->meta->bb_3_has_bb_dirtied = true;
      x_938->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_333(const auto &x_939) {
  return RecordEval([&](const auto &x_940) {
    if (x_939->has_prop_flex_shrink) {
      return (x_939->prop_flex_shrink.r.a0);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_331(const auto &x_943) {
  return RecordOverhead([&](const auto &x_944) {
    auto x_945 = x_943;
    if (x_945->meta->pass_0_proc_inited) {
      x_945->meta->bb_1_has_bb_dirtied = true;
      x_945->meta->bb_1_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    auto x_946 = x_943;
    if (x_946->meta->pass_1_proc_inited) {
      x_946->meta->bb_3_has_bb_dirtied = true;
      x_946->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_328(const auto &x_947) {
  return RecordEval([&](const auto &x_948) {
    if (x_947->has_prop_flex_grow) {
      return (x_947->prop_flex_grow.r.a0);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_326(const auto &x_951) {
  return RecordOverhead([&](const auto &x_952) {
    auto x_953 = x_951;
    if (x_953->meta->pass_0_proc_inited) {
      x_953->meta->bb_1_has_bb_dirtied = true;
      x_953->meta->bb_1_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    auto x_954 = x_951;
    if (x_954->meta->pass_0_proc_inited) {
      x_954->meta->bb_0_has_bb_dirtied = true;
      x_954->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    auto x_955 = x_951;
    if (x_955->meta->pass_1_proc_inited) {
      x_955->meta->bb_3_has_bb_dirtied = true;
      x_955->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_323(const auto &x_956) {
  return RecordEval([&](const auto &x_957) {
    if (x_956->has_prop_position) {
      return x_956->prop_position;
    } else {
      return DEStringLit(DEStringCase::DSTRING_static);
    }
  });
}
Unit var_modified_x_321(const auto &x_960) {
  return RecordOverhead([&](const auto &x_961) {
    auto x_962 = x_960;
    if (x_962->meta->pass_0_proc_inited) {
      x_962->meta->bb_1_has_bb_dirtied = true;
      x_962->meta->bb_1_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    ListIter(x_960->children, [&](const auto &x_963) {
      if (x_963->meta->pass_0_proc_inited) {
        x_963->meta->bb_1_has_bb_dirtied = true;
        x_963->meta->bb_1_bb_dirtied = true;
        return MakeUnit();
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_964 = x_960;
    if (x_964->meta->pass_0_proc_inited) {
      x_964->meta->bb_0_has_bb_dirtied = true;
      x_964->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_318(const auto &x_965) {
  return RecordEval([&](const auto &x_966) {
    if (x_965->has_prop_display) {
      return x_965->prop_display;
    } else {
      return DEStringLit(DEStringCase::DSTRING_block);
    }
  });
}
Unit var_modified_x_315(const auto &x_969) {
  return RecordOverhead([&](const auto &x_970) {
    if (x_969->next == nullptr) {
      OptionMatch(
          x_969->parent, [&](const auto &x_972) { return MakeUnit(); },
          [&](const auto &x_971) {
            auto x_973 = x_971;
            if (x_973->meta->pass_0_proc_inited) {
              x_973->meta->bb_0_has_bb_dirtied = true;
              x_973->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_969->next, [&](const auto &x_975) { return MakeUnit(); },
        [&](const auto &x_974) {
          auto x_976 = x_974;
          if (x_976->meta->pass_0_proc_inited) {
            x_976->meta->bb_0_has_bb_dirtied = true;
            x_976->meta->bb_0_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_312(const auto &x_977) {
  return RecordEval([&](const auto &x_978) {
    if (x_977->prev != nullptr) {
      if (x_977->var_line_break) {
        return plus((x_977->prev)->var_finished_intrinsic_height_sum,
                    plus((x_977->prev)->var_intrinsic_current_line_height, x_977->var_intrinsic_height_external));
      } else {
        return (x_977->prev)->var_finished_intrinsic_height_sum;
      }
    } else {
      if (x_977->var_line_break) {
        return x_977->var_intrinsic_height_external;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_310(const auto &x_993) {
  return RecordOverhead([&](const auto &x_994) {
    if (x_993->next == nullptr) {
      OptionMatch(
          x_993->parent, [&](const auto &x_996) { return MakeUnit(); },
          [&](const auto &x_995) {
            auto x_997 = x_995;
            if (x_997->meta->pass_0_proc_inited) {
              x_997->meta->bb_0_has_bb_dirtied = true;
              x_997->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_993->next, [&](const auto &x_999) { return MakeUnit(); },
        [&](const auto &x_998) {
          auto x_1000 = x_998;
          if (x_1000->meta->pass_0_proc_inited) {
            x_1000->meta->bb_0_has_bb_dirtied = true;
            x_1000->meta->bb_0_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_307(const auto &x_1001) {
  return RecordEval([&](const auto &x_1002) {
    if (x_1001->var_line_break) {
      return 0.;
    } else {
      return max(x_1001->var_intrinsic_height_external,
                 (x_1001->prev != nullptr) ? ((x_1001->prev)->var_intrinsic_current_line_height) : (0.));
    }
  });
}
Unit var_modified_x_305(const auto &x_1009) {
  return RecordOverhead([&](const auto &x_1010) {
    OptionMatch(
        x_1009->next, [&](const auto &x_1012) { return MakeUnit(); },
        [&](const auto &x_1011) {
          auto x_1013 = x_1011;
          if (x_1013->meta->pass_0_proc_inited) {
            x_1013->meta->bb_0_has_bb_dirtied = true;
            x_1013->meta->bb_0_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    if (x_1009->next == nullptr) {
      OptionMatch(
          x_1009->parent, [&](const auto &x_1015) { return MakeUnit(); },
          [&](const auto &x_1014) {
            auto x_1016 = x_1014;
            if (x_1016->meta->pass_1_proc_inited) {
              x_1016->meta->bb_3_has_bb_dirtied = true;
              x_1016->meta->bb_3_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    return MakeUnit();
  });
}
auto eval_expr_x_302(const auto &x_1017) {
  return RecordEval([&](const auto &x_1018) {
    return plus((x_1017->prev != nullptr) ? ((x_1017->prev)->var_intrinsic_height_sum) : (0.),
                x_1017->var_intrinsic_height_external);
  });
}
Unit var_modified_x_300(const auto &x_1023) {
  return RecordOverhead([&](const auto &x_1024) {
    auto x_1025 = x_1023;
    if (x_1025->meta->pass_0_proc_inited) {
      x_1025->meta->bb_0_has_bb_dirtied = true;
      x_1025->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_297(const auto &x_1026) {
  return RecordEval([&](const auto &x_1027) {
    if (eq(x_1026->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_1026->var_intrinsic_height_internal;
    }
  });
}
Unit var_modified_x_295(const auto &x_1032) {
  return RecordOverhead([&](const auto &x_1033) {
    auto x_1034 = x_1032;
    if (x_1034->meta->pass_0_proc_inited) {
      x_1034->meta->bb_0_has_bb_dirtied = true;
      x_1034->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    auto x_1035 = x_1032;
    if (x_1035->meta->pass_1_proc_inited) {
      x_1035->meta->bb_3_has_bb_dirtied = true;
      x_1035->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_292(const auto &x_1036) {
  return RecordEval([&](const auto &x_1037) {
    if (eq(x_1036->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return 0.;
    } else {
      if (x_1036->var_inside_svg) {
        return 0.;
      } else {
        if (x_1036->var_disabled) {
          return 0.;
        } else {
          if (neq(x_1036->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
              ((!(x_1036->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
               (neq(x_1036->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
                (neq(x_1036->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
                 (neq(x_1036->var_height_expr, DEStringLit(DEStringCase::DSTRING_min_content)) &&
                  (!(x_1036->var_height_expr.c == DEStringCase::DHasPrefix_calc))))))) {
            if (x_1036->var_height_expr.c == DEStringCase::DHasSuffix_px) {
              return x_1036->var_height_expr.r.a0;
            } else {
              if (x_1036->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
                return x_1036->var_height_expr.r.a0;
              } else {
                return x_1036->var_height_expr.r.a0;
              }
            }
          } else {
            return plus(
                x_1036->var_children_intrinsic_height,
                (eq(x_1036->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                    ? (10.)
                    : ((x_1036->var_is_default_case)
                           ? (0.)
                           : ((eq(x_1036->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                               eq(x_1036->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                  ? (0.)
                                  : ((eq(x_1036->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                         ? (10.)
                                         : ((eq(x_1036->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                                ? (((!x_1036->var_has_width_attr) && (!x_1036->var_has_height_attr))
                                                       ? (150.)
                                                       : ((x_1036->var_has_height_attr) ? (x_1036->var_height_attr)
                                                                                        : (x_1036->attr_viewBox.r.a3)))
                                                : ((eq(x_1036->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                       ? ((x_1036->var_has_height_attr)
                                                              ? (x_1036->var_height_attr)
                                                              : ((x_1036->has_attr_image_height &&
                                                                  (!x_1036->var_has_width_attr))
                                                                     ? (int_to_float(x_1036->attr_image_height))
                                                                     : ((neq(x_1036->attr_image_width,
                                                                             static_cast<int64_t>(0)))
                                                                            ? (mult(x_1036->var_width_attr,
                                                                                    divide(
                                                                                        int_to_float(
                                                                                            x_1036->attr_image_height),
                                                                                        int_to_float(
                                                                                            x_1036->attr_image_width))))
                                                                            : (0.))))
                                                       : ((eq(x_1036->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                              ? (150.)
                                                              : ((eq(x_1036->name,
                                                                     DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                     ? (100.)
                                                                     : (150.)))))))));
          }
        }
      }
    }
  });
}
Unit var_modified_x_290(const auto &x_1120) {
  return RecordOverhead([&](const auto &x_1121) {
    auto x_1122 = x_1120;
    if (x_1122->meta->pass_1_proc_inited) {
      x_1122->meta->bb_3_has_bb_dirtied = true;
      x_1122->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_287(const auto &x_1123) {
  return RecordEval([&](const auto &x_1124) {
    if (eq(x_1123->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
        (x_1123->var_inside_svg || x_1123->var_disabled)) {
      return true;
    } else {
      if ((x_1123->parent != nullptr) && (x_1123->parent)->var_is_flex_column) {
        return false;
      } else {
        if (eq(x_1123->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
            ((x_1123->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
             ((x_1123->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
              ((x_1123->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
               ((x_1123->var_height_expr.c == DEStringCase::DHasPrefix_calc) ||
                (eq(x_1123->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)) ||
                 eq(x_1123->var_height_expr, DEStringLit(DEStringCase::DSTRING_min_content)))))))) {
          return true;
        } else {
          return false;
        }
      }
    }
  });
}
Unit var_modified_x_285(const auto &x_1153) {
  return RecordOverhead([&](const auto &x_1154) {
    auto x_1155 = x_1153;
    if (x_1155->meta->pass_0_proc_inited) {
      x_1155->meta->bb_0_has_bb_dirtied = true;
      x_1155->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    auto x_1156 = x_1153;
    if (x_1156->meta->pass_1_proc_inited) {
      x_1156->meta->bb_3_has_bb_dirtied = true;
      x_1156->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_282(const auto &x_1157) {
  return RecordEval([&](const auto &x_1158) {
    if (x_1157->has_prop_height) {
      return x_1157->prop_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  });
}
Unit var_modified_x_280(const auto &x_1161) {
  return RecordOverhead([&](const auto &x_1162) {
    auto x_1163 = x_1161;
    if (x_1163->meta->pass_0_proc_inited) {
      x_1163->meta->bb_0_has_bb_dirtied = true;
      x_1163->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_277(const auto &x_1164) {
  return RecordEval([&](const auto &x_1165) {
    if (x_1164->last != nullptr) {
      return plus((x_1164->last)->var_finished_intrinsic_height_sum, (x_1164->last)->var_intrinsic_current_line_height);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_275(const auto &x_1170) {
  return RecordOverhead([&](const auto &x_1171) {
    OptionMatch(
        x_1170->next, [&](const auto &x_1173) { return MakeUnit(); },
        [&](const auto &x_1172) {
          auto x_1174 = x_1172;
          if (x_1174->meta->pass_0_proc_inited) {
            x_1174->meta->bb_0_has_bb_dirtied = true;
            x_1174->meta->bb_0_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    if (x_1170->next == nullptr) {
      OptionMatch(
          x_1170->parent, [&](const auto &x_1176) { return MakeUnit(); },
          [&](const auto &x_1175) {
            auto x_1177 = x_1175;
            if (x_1177->meta->pass_1_proc_inited) {
              x_1177->meta->bb_3_has_bb_dirtied = true;
              x_1177->meta->bb_3_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    return MakeUnit();
  });
}
auto eval_expr_x_272(const auto &x_1178) {
  return RecordEval([&](const auto &x_1179) {
    return plus((x_1178->prev != nullptr) ? ((x_1178->prev)->var_intrinsic_width_sum) : (0.),
                x_1178->var_intrinsic_width_external);
  });
}
Unit var_modified_x_270(const auto &x_1184) {
  return RecordOverhead([&](const auto &x_1185) {
    if (x_1184->next == nullptr) {
      OptionMatch(
          x_1184->parent, [&](const auto &x_1187) { return MakeUnit(); },
          [&](const auto &x_1186) {
            auto x_1188 = x_1186;
            if (x_1188->meta->pass_0_proc_inited) {
              x_1188->meta->bb_0_has_bb_dirtied = true;
              x_1188->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_1184->next, [&](const auto &x_1190) { return MakeUnit(); },
        [&](const auto &x_1189) {
          auto x_1191 = x_1189;
          if (x_1191->meta->pass_0_proc_inited) {
            x_1191->meta->bb_0_has_bb_dirtied = true;
            x_1191->meta->bb_0_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_267(const auto &x_1192) {
  return RecordEval([&](const auto &x_1193) {
    return max(x_1192->var_intrinsic_current_line_width,
               (x_1192->prev != nullptr) ? ((x_1192->prev)->var_intrinsic_width_max) : (0.));
  });
}
Unit var_modified_x_265(const auto &x_1198) {
  return RecordOverhead([&](const auto &x_1199) {
    auto x_1200 = x_1198;
    if (x_1200->meta->pass_0_proc_inited) {
      x_1200->meta->bb_0_has_bb_dirtied = true;
      x_1200->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    OptionMatch(
        x_1198->next, [&](const auto &x_1202) { return MakeUnit(); },
        [&](const auto &x_1201) {
          auto x_1203 = x_1201;
          if (x_1203->meta->pass_0_proc_inited) {
            x_1203->meta->bb_0_has_bb_dirtied = true;
            x_1203->meta->bb_0_bb_dirtied = true;
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_262(const auto &x_1204) {
  return RecordEval([&](const auto &x_1205) {
    return plus(x_1204->var_intrinsic_width_external,
                ((x_1204->prev != nullptr) && (!(x_1204->prev)->var_line_break))
                    ? ((x_1204->prev)->var_intrinsic_current_line_width)
                    : (0.));
  });
}
Unit var_modified_x_260(const auto &x_1212) {
  return RecordOverhead([&](const auto &x_1213) {
    auto x_1214 = x_1212;
    if (x_1214->meta->pass_0_proc_inited) {
      x_1214->meta->bb_0_has_bb_dirtied = true;
      x_1214->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_257(const auto &x_1215) {
  return RecordEval([&](const auto &x_1216) {
    if (eq(x_1215->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_1215->var_intrinsic_width_internal;
    }
  });
}
Unit var_modified_x_255(const auto &x_1221) {
  return RecordOverhead([&](const auto &x_1222) {
    auto x_1223 = x_1221;
    if (x_1223->meta->pass_0_proc_inited) {
      x_1223->meta->bb_0_has_bb_dirtied = true;
      x_1223->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    auto x_1224 = x_1221;
    if (x_1224->meta->pass_1_proc_inited) {
      x_1224->meta->bb_3_has_bb_dirtied = true;
      x_1224->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_252(const auto &x_1225) {
  return RecordEval([&](const auto &x_1226) {
    if (eq(x_1225->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return 0.;
    } else {
      if (x_1225->var_inside_svg) {
        return 0.;
      } else {
        if (x_1225->var_disabled) {
          return 0.;
        } else {
          if (neq(x_1225->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
              ((!(x_1225->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
               (neq(x_1225->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
                (neq(x_1225->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
                 (neq(x_1225->var_width_expr, DEStringLit(DEStringCase::DSTRING_min_content)) &&
                  (!(x_1225->var_width_expr.c == DEStringCase::DHasPrefix_calc))))))) {
            if (x_1225->var_width_expr.c == DEStringCase::DHasSuffix_px) {
              return x_1225->var_width_expr.r.a0;
            } else {
              return x_1225->var_width_expr.r.a0;
            }
          } else {
            return plus(
                x_1225->var_children_intrinsic_width,
                (eq(x_1225->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                    ? (100.)
                    : ((x_1225->var_is_default_case)
                           ? (0.)
                           : ((eq(x_1225->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                               eq(x_1225->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                  ? (0.)
                                  : ((eq(x_1225->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                         ? (100.)
                                         : ((eq(x_1225->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                                ? (((!x_1225->var_has_width_attr) && (!x_1225->var_has_height_attr))
                                                       ? (300.)
                                                       : ((x_1225->var_has_width_attr) ? (x_1225->var_width_attr)
                                                                                       : (x_1225->attr_viewBox.r.a2)))
                                                : ((eq(x_1225->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                       ? ((x_1225->var_has_width_attr)
                                                              ? (x_1225->var_width_attr)
                                                              : ((x_1225->has_attr_image_width &&
                                                                  (!x_1225->var_has_height_attr))
                                                                     ? (int_to_float(x_1225->attr_image_width))
                                                                     : ((neq(x_1225->attr_image_height,
                                                                             static_cast<int64_t>(0)))
                                                                            ? (mult(
                                                                                  x_1225->var_height_attr,
                                                                                  divide(
                                                                                      int_to_float(
                                                                                          x_1225->attr_image_width),
                                                                                      int_to_float(
                                                                                          x_1225->attr_image_height))))
                                                                            : (0.))))
                                                       : ((eq(x_1225->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                              ? (300.)
                                                              : ((eq(x_1225->name,
                                                                     DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                     ? (100.)
                                                                     : (300.)))))))));
          }
        }
      }
    }
  });
}
Unit var_modified_x_250(const auto &x_1307) {
  return RecordOverhead([&](const auto &x_1308) {
    auto x_1309 = x_1307;
    if (x_1309->meta->pass_0_proc_inited) {
      x_1309->meta->bb_0_has_bb_dirtied = true;
      x_1309->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_247(const auto &x_1310) {
  return RecordEval([&](const auto &x_1311) {
    if (x_1310->last != nullptr) {
      return (x_1310->last)->var_intrinsic_width_max;
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_245(const auto &x_1314) {
  return RecordOverhead([&](const auto &x_1315) {
    auto x_1316 = x_1314;
    if (x_1316->meta->pass_1_proc_inited) {
      x_1316->meta->bb_3_has_bb_dirtied = true;
      x_1316->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_242(const auto &x_1317) {
  return RecordEval([&](const auto &x_1318) {
    if (eq(x_1317->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
        (x_1317->var_inside_svg || x_1317->var_disabled)) {
      return true;
    } else {
      if ((x_1317->parent != nullptr) && (x_1317->parent)->var_is_flex_row) {
        return false;
      } else {
        if (eq(x_1317->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
            ((x_1317->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
             ((x_1317->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
              ((x_1317->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
               (eq(x_1317->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) ||
                eq(x_1317->var_width_expr, DEStringLit(DEStringCase::DSTRING_min_content))))))) {
          return true;
        } else {
          return false;
        }
      }
    }
  });
}
Unit var_modified_x_240(const auto &x_1345) {
  return RecordOverhead([&](const auto &x_1346) {
    auto x_1347 = x_1345;
    if (x_1347->meta->pass_0_proc_inited) {
      x_1347->meta->bb_0_has_bb_dirtied = true;
      x_1347->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_237(const auto &x_1348) {
  return RecordEval([&](const auto &x_1349) {
    if (eq(x_1348->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return true;
    } else {
      if (x_1348->var_inside_svg) {
        return true;
      } else {
        if (x_1348->var_disabled) {
          return true;
        } else {if ( eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_H5)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_H6)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_I)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_NG_PLURALIZE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_NG_VIEW)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_APP_ROOT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_html)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_META)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TITLE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_LINK)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SCRIPT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_STYLE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_PSA_BANNERS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_NAV_SEARCH)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_LOGIN_BUTTON)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_MEDIA_BUTTON)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_MEDIA_MENU)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_ICON_HAMBURGER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_PRIMARY_NAV)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_WAYBACK_SLIDER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_MORE_SLIDER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_MEDIA_SLIDER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SIGNED_OUT_DROPDOWN)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SEARCH_MENU)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_DESKTOP_SUBNAV)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_IA_TOPNAV)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_MODAL_MANAGER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_HORIZONTAL_ACTIVITY_INDICATOR)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_WAYBACK_SEARCH)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_IA_WAYBACK_SEARCH)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_IA_ICON_CLOSE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_IA_CLEARABLE_TEXT_INPUT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_COLLECTION_SEARCH_INPUT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_HOME_PAGE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_HOME_PAGE_HERO_BLOCK_ICON_BAR)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_HOME_PAGE_HERO_BLOCK)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_HOME_PAGE_ONBOARDING)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_INFINITE_SCROLLER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_ONBOARDING_TILE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_HERO_BLOCK_ANNOUNCEMENTS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SAVE_PAGE_FORM)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FIELDSET)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_MODAL_TEMPLATE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_ROUTER_SLOT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_APP_FOOTER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_CIRCULAR_ACTIVITY_INDICATOR)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_COLLECTION_TILE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_NOBR)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TH)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_S)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_BLOCKQUOTE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_CODE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_PRE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_HGROUP)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SUMMARY)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_DETAILS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_ACTION_LIST)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_ANCHORED_POSITION)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FOCUS_GROUP)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_ACTION_MENU)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_RELATIVE_TIME)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_REACT_APP)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TURBO_FRAME)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_CANVAS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHOW_DIALOG_ON_LOAD)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_THEAD)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_LOTTIE_PLAYER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_C_WIZ)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_NEXT_ROUTE_ANNOUNCER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_LEGEND)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_CG_BOARD)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_CG_CONTAINER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_CG_AUTO_PIECES)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_COORD)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_COORDS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_PIECE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_PEARL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_HELP)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_CG_RESIZE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SQUARE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_INDEX)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SAN)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_MOVE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SIGNAL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_DATA_SRC)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_REPUTATION_RECAPTCHA)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_ASYNC_LOADER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_GOOD_VISIT_TRACKER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_SERVER_SESSION)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_SCREEN_READER_CONTENT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_ACTIVATE_FEATURE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_TRACKER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_TOOLTIP)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_PERFMARK)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_IMG)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_DIALOG)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_LOADER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_NUMBER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_CREATE_POST_ENTRY_POINT_WRAPPER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_REDDIT_SKIP_TO_SIDEBAR)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_FEED_ERROR_BANNER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_SORT_DROPDOWN)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_LAYOUT_EVENT_SETTER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_COMMUNITY_HIGHLIGHT_CARD)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_GALLERY_CAROUSEL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_TITLE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_PROGRESS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_HOVERCARD)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_DISTINGUISHED_POST_TAGS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_TIMEAGO)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_STATUS_ICONS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_POST_OVERFLOW_MENU)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_POST_FLAIR)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_POST)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_CONTENT_TAGS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_FEED_PAGE_LOADING)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_FEED)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_SUBREDDIT_HEADER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_OBJECT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_DATA)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_PARTIAL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_AUTO_HEIGHT_ANIMATOR)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_REDDIT_HEADER_LARGE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_REDDIT_BREADCRUMBS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_REDDIT_SIDEBAR_NAV)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_SLOTTER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_DSA_TRANSPARENCY_MODAL_PROVIDER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_AUTH_FLOW_GOOGLE_ONE_TAP_SHELL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_MEDIA_LIGHTBOX)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_OVERLAY_DISPLAY)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_REDDIT_PAGE_DATA)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_SCREENVIEW_DATA)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_RECENT_PAGE_DATA)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_PERFMETRIC_COLLECTOR)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_NAVTIMINGS_COLLECTOR)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_APP)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_NAVIGATION_INDICATOR)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_EXPANDABLE_SECTION_HELPER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_COMMUNITY_HIGHLIGHT_CAROUSEL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_DEVVIT_EFFECT_WRAPPER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_WITH_OBSERVER_WRAPPER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_INS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_DROPDOWN_MENU)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_SEARCH_INPUT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_FACEPLATE_EXPANDABLE_SECTION_HELPER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_LEFT_NAV_TOP_SECTION)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_LEFT_NAV_TOPIC_TRACKER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_HUI_LEFT_NAV_SEE_MORE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_REDDIT_RECENT_PAGES)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_DROPDOWN_CLOSE_ON_SCROLL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_SIDEBAR_AD)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_REDDIT_SEARCH_LARGE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_REDDIT_HEADER_ACTION_ITEMS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SEARCH_DYNAMIC_ID_CACHE_CONTROLLER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SCREEN_READER_ALERT_OUTLET)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_SHREDDIT_PAGE_META)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_MASTHEAD)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_APP)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_GUIDE_MANAGER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_MDX_MANAGER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_PLAYLIST_MANAGER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_HOTKEY_MANAGER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TP_YT_APP_DRAWER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_MINI_GUIDE_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_PAGE_MANAGER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_POPUP_CONTAINER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_THIRD_PARTY_MANAGER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_LOTTIE_PLAYER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_YOODLE_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_TOPBAR_LOGO_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_SEARCHBOX)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_THUMBNAIL)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_MINIPLAYER_TOAST)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_MINIPLAYER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_RICH_GRID_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_TWO_COLUMN_BROWSE_RESULTS_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_BROWSE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_PLAYER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_FEED_NUDGE_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_RICH_SECTION_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_GUIDE_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_BUTTON_SHAPE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_BUTTON_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_TOPBAR_MENU_BUTTON_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_MINI_GUIDE_ENTRY_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_GUIDE_ENTRY_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_GUIDE_SECTION_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_GUIDE_SIGNIN_PROMO_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_WATCH_NEXT_SECONDARY_RESULTS_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TP_YT_PAPER_ITEM)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_WATCH_INFO_TEXT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_STRUCTURED_DESCRIPTION_CONTENT_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_CHANNEL_NAME)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_VIDEO_OWNER_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_TOUCH_FEEDBACK_SHAPE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_INLINE_PLAYER_CONTROLS)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_IMG_SHADOW)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_IRON_A11Y_ANNOUNCER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_FORMATTED_STRING)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_IMAGE)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_ATTRIBUTED_STRING)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TP_YT_PAPER_TOOLTIP)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_ANIMATED_ROLLING_NUMBER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TP_YT_PAPER_BUTTON)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_WATCH_METADATA)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_TEXT)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_VIDEO_PRIMARY_INFO_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_METADATA_ROW_CONTAINER_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_TEXT_INLINE_EXPANDER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_ICON)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_ICON_BUTTON)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_LOGO)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YT_INTERACTION)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_YTD_PERMISSION_ROLE_BOTTOM_BAR_RENDERER)) || (eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_STYLE)) || eq(x_1348->name,DEStringLit(DEStringCase::DSTRING_STRONG))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
            return true;
          } else {
            return false;
          }
        }
      }
    }
  });
}
Unit var_modified_x_235(const auto &x_1356) {
  return RecordOverhead([&](const auto &x_1357) {
    auto x_1358 = x_1356;
    if (x_1358->meta->pass_0_proc_inited) {
      x_1358->meta->bb_0_has_bb_dirtied = true;
      x_1358->meta->bb_0_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    auto x_1359 = x_1356;
    if (x_1359->meta->pass_1_proc_inited) {
      x_1359->meta->bb_3_has_bb_dirtied = true;
      x_1359->meta->bb_3_bb_dirtied = true;
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_232(const auto &x_1360) {
  return RecordEval([&](const auto &x_1361) {
    if (x_1360->has_prop_width) {
      return x_1360->prop_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  });
}
Unit eval_stmts_x_207(const auto &x_231) {
  WriteMetric();
  auto x_233 = eval_expr_x_232(x_231);
  if (x_231->has_var_width_expr) {
    if (!EqualValue(x_231->var_width_expr, x_233)) {
      var_modified_x_235(x_231);
    }
  }
  x_231->has_var_width_expr = true;
  x_231->var_width_expr = AsDEString(x_233);
  WriteMetric();
  auto x_238 = eval_expr_x_237(x_231);
  if (x_231->has_var_is_default_case) {
    if (!EqualValue(x_231->var_is_default_case, x_238)) {
      var_modified_x_240(x_231);
    }
  }
  x_231->has_var_is_default_case = true;
  x_231->var_is_default_case = Asbool(x_238);
  WriteMetric();
  auto x_243 = eval_expr_x_242(x_231);
  if (x_231->has_var_intrinsic_width_is_width) {
    if (!EqualValue(x_231->var_intrinsic_width_is_width, x_243)) {
      var_modified_x_245(x_231);
    }
  }
  x_231->has_var_intrinsic_width_is_width = true;
  x_231->var_intrinsic_width_is_width = Asbool(x_243);
  WriteMetric();
  auto x_248 = eval_expr_x_247(x_231);
  if (x_231->has_var_children_intrinsic_width) {
    if (!EqualValue(x_231->var_children_intrinsic_width, x_248)) {
      var_modified_x_250(x_231);
    }
  }
  x_231->has_var_children_intrinsic_width = true;
  x_231->var_children_intrinsic_width = Asdouble(x_248);
  WriteMetric();
  auto x_253 = eval_expr_x_252(x_231);
  if (x_231->has_var_intrinsic_width_internal) {
    if (!EqualValue(x_231->var_intrinsic_width_internal, x_253)) {
      var_modified_x_255(x_231);
    }
  }
  x_231->has_var_intrinsic_width_internal = true;
  x_231->var_intrinsic_width_internal = Asdouble(x_253);
  WriteMetric();
  auto x_258 = eval_expr_x_257(x_231);
  if (x_231->has_var_intrinsic_width_external) {
    if (!EqualValue(x_231->var_intrinsic_width_external, x_258)) {
      var_modified_x_260(x_231);
    }
  }
  x_231->has_var_intrinsic_width_external = true;
  x_231->var_intrinsic_width_external = Asdouble(x_258);
  WriteMetric();
  auto x_263 = eval_expr_x_262(x_231);
  if (x_231->has_var_intrinsic_current_line_width) {
    if (!EqualValue(x_231->var_intrinsic_current_line_width, x_263)) {
      var_modified_x_265(x_231);
    }
  }
  x_231->has_var_intrinsic_current_line_width = true;
  x_231->var_intrinsic_current_line_width = Asdouble(x_263);
  WriteMetric();
  auto x_268 = eval_expr_x_267(x_231);
  if (x_231->has_var_intrinsic_width_max) {
    if (!EqualValue(x_231->var_intrinsic_width_max, x_268)) {
      var_modified_x_270(x_231);
    }
  }
  x_231->has_var_intrinsic_width_max = true;
  x_231->var_intrinsic_width_max = Asdouble(x_268);
  WriteMetric();
  auto x_273 = eval_expr_x_272(x_231);
  if (x_231->has_var_intrinsic_width_sum) {
    if (!EqualValue(x_231->var_intrinsic_width_sum, x_273)) {
      var_modified_x_275(x_231);
    }
  }
  x_231->has_var_intrinsic_width_sum = true;
  x_231->var_intrinsic_width_sum = Asdouble(x_273);
  WriteMetric();
  auto x_278 = eval_expr_x_277(x_231);
  if (x_231->has_var_children_intrinsic_height) {
    if (!EqualValue(x_231->var_children_intrinsic_height, x_278)) {
      var_modified_x_280(x_231);
    }
  }
  x_231->has_var_children_intrinsic_height = true;
  x_231->var_children_intrinsic_height = Asdouble(x_278);
  WriteMetric();
  auto x_283 = eval_expr_x_282(x_231);
  if (x_231->has_var_height_expr) {
    if (!EqualValue(x_231->var_height_expr, x_283)) {
      var_modified_x_285(x_231);
    }
  }
  x_231->has_var_height_expr = true;
  x_231->var_height_expr = AsDEString(x_283);
  WriteMetric();
  auto x_288 = eval_expr_x_287(x_231);
  if (x_231->has_var_intrinsic_height_is_height) {
    if (!EqualValue(x_231->var_intrinsic_height_is_height, x_288)) {
      var_modified_x_290(x_231);
    }
  }
  x_231->has_var_intrinsic_height_is_height = true;
  x_231->var_intrinsic_height_is_height = Asbool(x_288);
  WriteMetric();
  auto x_293 = eval_expr_x_292(x_231);
  if (x_231->has_var_intrinsic_height_internal) {
    if (!EqualValue(x_231->var_intrinsic_height_internal, x_293)) {
      var_modified_x_295(x_231);
    }
  }
  x_231->has_var_intrinsic_height_internal = true;
  x_231->var_intrinsic_height_internal = Asdouble(x_293);
  WriteMetric();
  auto x_298 = eval_expr_x_297(x_231);
  if (x_231->has_var_intrinsic_height_external) {
    if (!EqualValue(x_231->var_intrinsic_height_external, x_298)) {
      var_modified_x_300(x_231);
    }
  }
  x_231->has_var_intrinsic_height_external = true;
  x_231->var_intrinsic_height_external = Asdouble(x_298);
  WriteMetric();
  auto x_303 = eval_expr_x_302(x_231);
  if (x_231->has_var_intrinsic_height_sum) {
    if (!EqualValue(x_231->var_intrinsic_height_sum, x_303)) {
      var_modified_x_305(x_231);
    }
  }
  x_231->has_var_intrinsic_height_sum = true;
  x_231->var_intrinsic_height_sum = Asdouble(x_303);
  WriteMetric();
  auto x_308 = eval_expr_x_307(x_231);
  if (x_231->has_var_intrinsic_current_line_height) {
    if (!EqualValue(x_231->var_intrinsic_current_line_height, x_308)) {
      var_modified_x_310(x_231);
    }
  }
  x_231->has_var_intrinsic_current_line_height = true;
  x_231->var_intrinsic_current_line_height = Asdouble(x_308);
  WriteMetric();
  auto x_313 = eval_expr_x_312(x_231);
  if (x_231->has_var_finished_intrinsic_height_sum) {
    if (!EqualValue(x_231->var_finished_intrinsic_height_sum, x_313)) {
      var_modified_x_315(x_231);
    }
  }
  x_231->has_var_finished_intrinsic_height_sum = true;
  x_231->var_finished_intrinsic_height_sum = Asdouble(x_313);
  return MakeUnit();
}
Unit eval_stmts_x_203(const auto &x_317) {
  WriteMetric();
  auto x_319 = eval_expr_x_318(x_317);
  if (x_317->has_var_display) {
    if (!EqualValue(x_317->var_display, x_319)) {
      var_modified_x_321(x_317);
    }
  }
  x_317->has_var_display = true;
  x_317->var_display = AsDEString(x_319);
  WriteMetric();
  auto x_324 = eval_expr_x_323(x_317);
  if (x_317->has_var_position) {
    if (!EqualValue(x_317->var_position, x_324)) {
      var_modified_x_326(x_317);
    }
  }
  x_317->has_var_position = true;
  x_317->var_position = AsDEString(x_324);
  WriteMetric();
  auto x_329 = eval_expr_x_328(x_317);
  if (x_317->has_var_flex_grow) {
    if (!EqualValue(x_317->var_flex_grow, x_329)) {
      var_modified_x_331(x_317);
    }
  }
  x_317->has_var_flex_grow = true;
  x_317->var_flex_grow = Asdouble(x_329);
  WriteMetric();
  auto x_334 = eval_expr_x_333(x_317);
  if (x_317->has_var_flex_shrink) {
    if (!EqualValue(x_317->var_flex_shrink, x_334)) {
      var_modified_x_336(x_317);
    }
  }
  x_317->has_var_flex_shrink = true;
  x_317->var_flex_shrink = Asdouble(x_334);
  WriteMetric();
  auto x_339 = eval_expr_x_338(x_317);
  if (x_317->has_var_flex_grow_sum) {
    if (!EqualValue(x_317->var_flex_grow_sum, x_339)) {
      var_modified_x_341(x_317);
    }
  }
  x_317->has_var_flex_grow_sum = true;
  x_317->var_flex_grow_sum = Asdouble(x_339);
  WriteMetric();
  auto x_344 = eval_expr_x_343(x_317);
  if (x_317->has_var_flex_shrink_sum) {
    if (!EqualValue(x_317->var_flex_shrink_sum, x_344)) {
      var_modified_x_346(x_317);
    }
  }
  x_317->has_var_flex_shrink_sum = true;
  x_317->var_flex_shrink_sum = Asdouble(x_344);
  WriteMetric();
  auto x_349 = eval_expr_x_348(x_317);
  if (x_317->has_var_flex_direction) {
    if (!EqualValue(x_317->var_flex_direction, x_349)) {
      var_modified_x_351(x_317);
    }
  }
  x_317->has_var_flex_direction = true;
  x_317->var_flex_direction = AsDEString(x_349);
  WriteMetric();
  auto x_354 = eval_expr_x_353(x_317);
  if (x_317->has_var_is_flex_row) {
    if (!EqualValue(x_317->var_is_flex_row, x_354)) {
      var_modified_x_356(x_317);
    }
  }
  x_317->has_var_is_flex_row = true;
  x_317->var_is_flex_row = Asbool(x_354);
  WriteMetric();
  auto x_359 = eval_expr_x_358(x_317);
  if (x_317->has_var_is_flex_column) {
    if (!EqualValue(x_317->var_is_flex_column, x_359)) {
      var_modified_x_361(x_317);
    }
  }
  x_317->has_var_is_flex_column = true;
  x_317->var_is_flex_column = Asbool(x_359);
  WriteMetric();
  auto x_364 = eval_expr_x_363(x_317);
  if (x_317->has_var_width_attr) {
    if (!EqualValue(x_317->var_width_attr, x_364)) {
      var_modified_x_366(x_317);
    }
  }
  x_317->has_var_width_attr = true;
  x_317->var_width_attr = Asdouble(x_364);
  WriteMetric();
  auto x_369 = eval_expr_x_368(x_317);
  if (x_317->has_var_has_width_attr) {
    if (!EqualValue(x_317->var_has_width_attr, x_369)) {
      var_modified_x_371(x_317);
    }
  }
  x_317->has_var_has_width_attr = true;
  x_317->var_has_width_attr = Asbool(x_369);
  WriteMetric();
  auto x_374 = eval_expr_x_373(x_317);
  if (x_317->has_var_height_attr) {
    if (!EqualValue(x_317->var_height_attr, x_374)) {
      var_modified_x_376(x_317);
    }
  }
  x_317->has_var_height_attr = true;
  x_317->var_height_attr = Asdouble(x_374);
  WriteMetric();
  auto x_379 = eval_expr_x_378(x_317);
  if (x_317->has_var_has_height_attr) {
    if (!EqualValue(x_317->var_has_height_attr, x_379)) {
      var_modified_x_381(x_317);
    }
  }
  x_317->has_var_has_height_attr = true;
  x_317->var_has_height_attr = Asbool(x_379);
  WriteMetric();
  auto x_384 = eval_expr_x_383(x_317);
  if (x_317->has_var_is_svg_block) {
    if (!EqualValue(x_317->var_is_svg_block, x_384)) {
      var_modified_x_386(x_317);
    }
  }
  x_317->has_var_is_svg_block = true;
  x_317->var_is_svg_block = Asbool(x_384);
  WriteMetric();
  auto x_389 = eval_expr_x_388(x_317);
  if (x_317->has_var_inside_svg) {
    if (!EqualValue(x_317->var_inside_svg, x_389)) {
      var_modified_x_391(x_317);
    }
  }
  x_317->has_var_inside_svg = true;
  x_317->var_inside_svg = Asbool(x_389);
  WriteMetric();
  auto x_394 = eval_expr_x_393(x_317);
  if (x_317->has_var_disabled) {
    if (!EqualValue(x_317->var_disabled, x_394)) {
      var_modified_x_396(x_317);
    }
  }
  x_317->has_var_disabled = true;
  x_317->var_disabled = Asbool(x_394);
  WriteMetric();
  auto x_399 = eval_expr_x_398(x_317);
  if (x_317->has_var_visible) {
    if (!EqualValue(x_317->var_visible, x_399)) {
      var_modified_x_401(x_317);
    }
  }
  x_317->has_var_visible = true;
  x_317->var_visible = Asbool(x_399);
  WriteMetric();
  auto x_404 = eval_expr_x_403(x_317);
  if (x_317->has_var_line_break) {
    if (!EqualValue(x_317->var_line_break, x_404)) {
      var_modified_x_406(x_317);
    }
  }
  x_317->has_var_line_break = true;
  x_317->var_line_break = Asbool(x_404);
  return MakeUnit();
}
Unit eval_stmts_x_200(const auto &x_408) { return MakeUnit(); }
Unit eval_stmts_x_196(const auto &x_409) {
  WriteMetric();
  auto x_411 = eval_expr_x_410(x_409);
  if (x_409->has_var_box_width) {
    if (!EqualValue(x_409->var_box_width, x_411)) {
      var_modified_x_413(x_409);
    }
  }
  x_409->has_var_box_width = true;
  x_409->var_box_width = Asdouble(x_411);
  WriteMetric();
  auto x_416 = eval_expr_x_415(x_409);
  if (x_409->has_var_box_height) {
    if (!EqualValue(x_409->var_box_height, x_416)) {
      var_modified_x_418(x_409);
    }
  }
  x_409->has_var_box_height = true;
  x_409->var_box_height = Asdouble(x_416);
  WriteMetric();
  auto x_421 = eval_expr_x_420(x_409);
  if (x_409->has_var_left_over) {
    if (!EqualValue(x_409->var_left_over, x_421)) {
      var_modified_x_423(x_409);
    }
  }
  x_409->has_var_left_over = true;
  x_409->var_left_over = Asdouble(x_421);
  WriteMetric();
  auto x_426 = eval_expr_x_425(x_409);
  if (x_409->has_var_flex_amount) {
    if (!EqualValue(x_409->var_flex_amount, x_426)) {
      var_modified_x_428(x_409);
    }
  }
  x_409->has_var_flex_amount = true;
  x_409->var_flex_amount = Asdouble(x_426);
  WriteMetric();
  auto x_431 = eval_expr_x_430(x_409);
  if (x_409->has_var_flex_unit) {
    if (!EqualValue(x_409->var_flex_unit, x_431)) {
      var_modified_x_433(x_409);
    }
  }
  x_409->has_var_flex_unit = true;
  x_409->var_flex_unit = Asdouble(x_431);
  WriteMetric();
  auto x_436 = eval_expr_x_435(x_409);
  if (x_409->has_var_x) {
    if (!EqualValue(x_409->var_x, x_436)) {
      var_modified_x_438(x_409);
    }
  }
  x_409->has_var_x = true;
  x_409->var_x = Asdouble(x_436);
  WriteMetric();
  auto x_441 = eval_expr_x_440(x_409);
  if (x_409->has_var_width_internal) {
    if (!EqualValue(x_409->var_width_internal, x_441)) {
      var_modified_x_443(x_409);
    }
  }
  x_409->has_var_width_internal = true;
  x_409->var_width_internal = Asdouble(x_441);
  WriteMetric();
  auto x_446 = eval_expr_x_445(x_409);
  if (x_409->has_var_width_external) {
    if (!EqualValue(x_409->var_width_external, x_446)) {
      var_modified_x_448(x_409);
    }
  }
  x_409->has_var_width_external = true;
  x_409->var_width_external = Asdouble(x_446);
  WriteMetric();
  auto x_451 = eval_expr_x_450(x_409);
  if (x_409->has_var_y) {
    if (!EqualValue(x_409->var_y, x_451)) {
      var_modified_x_453(x_409);
    }
  }
  x_409->has_var_y = true;
  x_409->var_y = Asdouble(x_451);
  WriteMetric();
  auto x_456 = eval_expr_x_455(x_409);
  if (x_409->has_var_height_internal) {
    if (!EqualValue(x_409->var_height_internal, x_456)) {
      var_modified_x_458(x_409);
    }
  }
  x_409->has_var_height_internal = true;
  x_409->var_height_internal = Asdouble(x_456);
  WriteMetric();
  auto x_461 = eval_expr_x_460(x_409);
  if (x_409->has_var_height_external) {
    if (!EqualValue(x_409->var_height_external, x_461)) {
      var_modified_x_463(x_409);
    }
  }
  x_409->has_var_height_external = true;
  x_409->var_height_external = Asdouble(x_461);
  WriteMetric();
  auto x_466 = eval_expr_x_465(x_409);
  if (x_409->has_var_line_height) {
    if (!EqualValue(x_409->var_line_height, x_466)) {
      var_modified_x_468(x_409);
    }
  }
  x_409->has_var_line_height = true;
  x_409->var_line_height = Asdouble(x_466);
  return MakeUnit();
}
Unit x_470(const auto &x_471) {
  MetaReadMetric();
  if (x_471->meta->pass_1_proc_inited) {
    if (x_471->meta->bb_3_bb_dirtied) {
      StopRecordOverhead();
      eval_stmts_x_196(x_471);
      StartRecordOverhead();
      x_471->meta->bb_3_has_bb_dirtied = true;
      x_471->meta->bb_3_bb_dirtied = false;
      MakeUnit();
    }
    ListIter(x_471->children, [&](const auto &x_472) { return x_470(x_472); });
    if (x_471->meta->bb_2_bb_dirtied) {
      StopRecordOverhead();
      eval_stmts_x_200(x_471);
      StartRecordOverhead();
      x_471->meta->bb_2_has_bb_dirtied = true;
      x_471->meta->bb_2_bb_dirtied = false;
      MakeUnit();
    }
    MakeUnit();
  } else {
    x_471->meta->pass_1_proc_inited = true;
    StopRecordOverhead();
    eval_stmts_x_19(x_471);
    StartRecordOverhead();
    MakeUnit();
  }
  return MakeUnit();
}
Unit recalculate_internal_x_164(const auto &x_471) { return x_470(x_471); }
Unit x_473(const auto &x_474) {
  MetaReadMetric();
  if (x_474->meta->pass_0_proc_inited) {
    if (x_474->meta->bb_1_bb_dirtied) {
      StopRecordOverhead();
      eval_stmts_x_203(x_474);
      StartRecordOverhead();
      x_474->meta->bb_1_has_bb_dirtied = true;
      x_474->meta->bb_1_bb_dirtied = false;
      MakeUnit();
    }
    ListIter(x_474->children, [&](const auto &x_475) { return x_473(x_475); });
    if (x_474->meta->bb_0_bb_dirtied) {
      StopRecordOverhead();
      eval_stmts_x_207(x_474);
      StartRecordOverhead();
      x_474->meta->bb_0_has_bb_dirtied = true;
      x_474->meta->bb_0_bb_dirtied = false;
      MakeUnit();
    }
    MakeUnit();
  } else {
    x_474->meta->pass_0_proc_inited = true;
    StopRecordOverhead();
    eval_stmts_x_17(x_474);
    StartRecordOverhead();
    MakeUnit();
  }
  return MakeUnit();
}
Unit recalculate_internal_x_163(const auto &x_474) { return x_473(x_474); }
Unit x_45(const auto &x_46, const auto &x_47, const auto &x_48) {
  auto x_49 = ListHeadExn(x_46);
  auto x_50 = ListTailExn(x_46);
  if (ListIsEmpty(x_50)) {
    auto x_51 = ListSplitN(x_47->children, x_49);
    OutputChangeMetric(IntAdd(layout_size_x_3(ListNthExn(x_47->children, x_49)), layout_size_x_3(x_48)));
    x_47->children = ListAppend(Zro(x_51), Cons(x_48, ListTailExn(Fst(x_51))));
    return MakeUnit();
  } else {
    return x_45(x_50, ListNthExn(x_47->children, x_49), x_48);
  }
}
Unit replace_layout_node_x_44(const auto &x_46, const auto &x_47, const auto &x_48) { return x_45(x_46, x_47, x_48); }
Unit x_52(const auto &x_53, const auto &x_54, const auto &x_55) {
  auto x_56 = ListHeadExn(x_53);
  auto x_57 = ListTailExn(x_53);
  if (ListIsEmpty(x_57)) {
    OutputChangeMetric(layout_size_x_3(x_55));
    auto x_58 = ListSplitN(x_54->children, x_56);
    x_54->children = ListAppend(Zro(x_58), Cons(x_55, Fst(x_58)));
    return MakeUnit();
  } else {
    return x_52(x_57, ListNthExn(x_54->children, x_56), x_55);
  }
}
Unit add_layout_node_x_42(const auto &x_53, const auto &x_54, const auto &x_55) { return x_52(x_53, x_54, x_55); }
Unit x_59(const auto &x_60, const auto &x_61, const auto &x_62) {
  auto x_63 = ListHeadExn(x_60);
  auto x_64 = ListTailExn(x_60);
  if (ListIsEmpty(x_64)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn(x_61->children, x_63)));
    auto x_65 = ListSplitN(x_61->children, x_63);
    x_61->children = ListAppend(Zro(x_65), ListTailExn(Fst(x_65)));
    return MakeUnit();
  } else {
    return x_59(x_64, ListNthExn(x_61->children, x_63), x_62);
  }
}
Unit remove_layout_node_x_40(const auto &x_60, const auto &x_61, const auto &x_62) { return x_59(x_60, x_61, x_62); }
Unit x_66(const auto &x_67, const auto &x_68, const auto &x_69) {
  return ListMatch(
      x_67,
      [&](const auto &x_72) {
        auto x_73 = Zro(x_69);
        auto x_74 = Zro(x_73);
        auto x_75 = Fst(x_73);
        auto x_76 = Fst(x_69);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1452 = x_74;
        if (x_1452 == "attributes") {
          std::string x_1453 = x_75;
          if (x_1453 == "width") {
            WriteMetric();
            x_68->has_attr_width = true;
            x_68->attr_width = AsDEString(x_76);
            if (x_68->meta->pass_0_proc_inited) {
              x_68->meta->bb_1_has_bb_dirtied = true;
              x_68->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1453 == "image_height") {
            WriteMetric();
            x_68->has_attr_image_height = true;
            x_68->attr_image_height = Asint64_t(x_76);
            if (x_68->meta->pass_0_proc_inited) {
              x_68->meta->bb_0_has_bb_dirtied = true;
              x_68->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1453 == "image_width") {
            WriteMetric();
            x_68->has_attr_image_width = true;
            x_68->attr_image_width = Asint64_t(x_76);
            if (x_68->meta->pass_0_proc_inited) {
              x_68->meta->bb_0_has_bb_dirtied = true;
              x_68->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1453 == "height") {
            WriteMetric();
            x_68->has_attr_height = true;
            x_68->attr_height = AsDEString(x_76);
            if (x_68->meta->pass_0_proc_inited) {
              x_68->meta->bb_1_has_bb_dirtied = true;
              x_68->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1453 == "viewBox") {
            WriteMetric();
            x_68->has_attr_viewBox = true;
            x_68->attr_viewBox = AsDEString(x_76);
            if (x_68->meta->pass_0_proc_inited) {
              x_68->meta->bb_0_has_bb_dirtied = true;
              x_68->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1452 == "properties") {
          std::string x_1454 = x_75;
          if (x_1454 == "width") {
            WriteMetric();
            x_68->has_prop_width = true;
            x_68->prop_width = AsDEString(x_76);
            if (x_68->meta->pass_0_proc_inited) {
              x_68->meta->bb_0_has_bb_dirtied = true;
              x_68->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1454 == "flex-grow") {
            WriteMetric();
            x_68->has_prop_flex_grow = true;
            x_68->prop_flex_grow = AsDEString(x_76);
            if (x_68->meta->pass_0_proc_inited) {
              x_68->meta->bb_1_has_bb_dirtied = true;
              x_68->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1454 == "height") {
            WriteMetric();
            x_68->has_prop_height = true;
            x_68->prop_height = AsDEString(x_76);
            if (x_68->meta->pass_0_proc_inited) {
              x_68->meta->bb_0_has_bb_dirtied = true;
              x_68->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1454 == "display") {
            WriteMetric();
            x_68->has_prop_display = true;
            x_68->prop_display = AsDEString(x_76);
            if (x_68->meta->pass_0_proc_inited) {
              x_68->meta->bb_1_has_bb_dirtied = true;
              x_68->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1454 == "position") {
            WriteMetric();
            x_68->has_prop_position = true;
            x_68->prop_position = AsDEString(x_76);
            if (x_68->meta->pass_0_proc_inited) {
              x_68->meta->bb_1_has_bb_dirtied = true;
              x_68->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1454 == "flex-shrink") {
            WriteMetric();
            x_68->has_prop_flex_shrink = true;
            x_68->prop_flex_shrink = AsDEString(x_76);
            if (x_68->meta->pass_0_proc_inited) {
              x_68->meta->bb_1_has_bb_dirtied = true;
              x_68->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1454 == "flex-direction") {
            WriteMetric();
            x_68->has_prop_flex_direction = true;
            x_68->prop_flex_direction = AsDEString(x_76);
            if (x_68->meta->pass_0_proc_inited) {
              x_68->meta->bb_1_has_bb_dirtied = true;
              x_68->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_70, const auto &x_71) { return x_66(x_71, ListNthExn(x_68->children, x_70), x_69); });
}
Unit insert_value_x_38(const auto &x_67, const auto &x_68, const auto &x_69) { return x_66(x_67, x_68, x_69); }
Unit x_77(const auto &x_78, const auto &x_79, const auto &x_80) {
  return ListMatch(
      x_78,
      [&](const auto &x_83) {
        auto x_84 = Zro(x_80);
        auto x_85 = Fst(x_80);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1455 = x_84;
        if (x_1455 == "attributes") {
          std::string x_1456 = x_85;
          if (x_1456 == "width") {
            WriteMetric();
            x_79->has_attr_width = false;
            if (x_79->meta->pass_0_proc_inited) {
              x_79->meta->bb_1_has_bb_dirtied = true;
              x_79->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1456 == "image_height") {
            WriteMetric();
            x_79->has_attr_image_height = false;
            if (x_79->meta->pass_0_proc_inited) {
              x_79->meta->bb_0_has_bb_dirtied = true;
              x_79->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1456 == "image_width") {
            WriteMetric();
            x_79->has_attr_image_width = false;
            if (x_79->meta->pass_0_proc_inited) {
              x_79->meta->bb_0_has_bb_dirtied = true;
              x_79->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1456 == "height") {
            WriteMetric();
            x_79->has_attr_height = false;
            if (x_79->meta->pass_0_proc_inited) {
              x_79->meta->bb_1_has_bb_dirtied = true;
              x_79->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1456 == "viewBox") {
            WriteMetric();
            x_79->has_attr_viewBox = false;
            if (x_79->meta->pass_0_proc_inited) {
              x_79->meta->bb_0_has_bb_dirtied = true;
              x_79->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1455 == "properties") {
          std::string x_1457 = x_85;
          if (x_1457 == "width") {
            WriteMetric();
            x_79->has_prop_width = false;
            if (x_79->meta->pass_0_proc_inited) {
              x_79->meta->bb_0_has_bb_dirtied = true;
              x_79->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1457 == "flex-grow") {
            WriteMetric();
            x_79->has_prop_flex_grow = false;
            if (x_79->meta->pass_0_proc_inited) {
              x_79->meta->bb_1_has_bb_dirtied = true;
              x_79->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1457 == "height") {
            WriteMetric();
            x_79->has_prop_height = false;
            if (x_79->meta->pass_0_proc_inited) {
              x_79->meta->bb_0_has_bb_dirtied = true;
              x_79->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1457 == "display") {
            WriteMetric();
            x_79->has_prop_display = false;
            if (x_79->meta->pass_0_proc_inited) {
              x_79->meta->bb_1_has_bb_dirtied = true;
              x_79->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1457 == "position") {
            WriteMetric();
            x_79->has_prop_position = false;
            if (x_79->meta->pass_0_proc_inited) {
              x_79->meta->bb_1_has_bb_dirtied = true;
              x_79->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1457 == "flex-shrink") {
            WriteMetric();
            x_79->has_prop_flex_shrink = false;
            if (x_79->meta->pass_0_proc_inited) {
              x_79->meta->bb_1_has_bb_dirtied = true;
              x_79->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1457 == "flex-direction") {
            WriteMetric();
            x_79->has_prop_flex_direction = false;
            if (x_79->meta->pass_0_proc_inited) {
              x_79->meta->bb_1_has_bb_dirtied = true;
              x_79->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_81, const auto &x_82) { return x_77(x_82, ListNthExn(x_79->children, x_81), x_80); });
}
Unit delete_value_x_36(const auto &x_78, const auto &x_79, const auto &x_80) { return x_77(x_78, x_79, x_80); }
Unit x_86(const auto &x_87, const auto &x_88, const auto &x_89) {
  return ListMatch(
      x_87,
      [&](const auto &x_92) {
        auto x_93 = Zro(x_89);
        auto x_94 = Zro(x_93);
        auto x_95 = Fst(x_93);
        auto x_96 = Fst(x_89);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1458 = x_94;
        if (x_1458 == "attributes") {
          std::string x_1459 = x_95;
          if (x_1459 == "width") {
            WriteMetric();
            x_88->has_attr_width = false;
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_88->has_attr_width = true;
            x_88->attr_width = AsDEString(x_96);
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1459 == "image_height") {
            WriteMetric();
            x_88->has_attr_image_height = false;
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_0_has_bb_dirtied = true;
              x_88->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_88->has_attr_image_height = true;
            x_88->attr_image_height = Asint64_t(x_96);
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_0_has_bb_dirtied = true;
              x_88->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1459 == "image_width") {
            WriteMetric();
            x_88->has_attr_image_width = false;
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_0_has_bb_dirtied = true;
              x_88->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_88->has_attr_image_width = true;
            x_88->attr_image_width = Asint64_t(x_96);
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_0_has_bb_dirtied = true;
              x_88->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1459 == "height") {
            WriteMetric();
            x_88->has_attr_height = false;
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_88->has_attr_height = true;
            x_88->attr_height = AsDEString(x_96);
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1459 == "viewBox") {
            WriteMetric();
            x_88->has_attr_viewBox = false;
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_0_has_bb_dirtied = true;
              x_88->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_88->has_attr_viewBox = true;
            x_88->attr_viewBox = AsDEString(x_96);
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_0_has_bb_dirtied = true;
              x_88->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1458 == "properties") {
          std::string x_1460 = x_95;
          if (x_1460 == "width") {
            WriteMetric();
            x_88->has_prop_width = false;
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_0_has_bb_dirtied = true;
              x_88->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_88->has_prop_width = true;
            x_88->prop_width = AsDEString(x_96);
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_0_has_bb_dirtied = true;
              x_88->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1460 == "flex-grow") {
            WriteMetric();
            x_88->has_prop_flex_grow = false;
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_88->has_prop_flex_grow = true;
            x_88->prop_flex_grow = AsDEString(x_96);
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1460 == "height") {
            WriteMetric();
            x_88->has_prop_height = false;
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_0_has_bb_dirtied = true;
              x_88->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_88->has_prop_height = true;
            x_88->prop_height = AsDEString(x_96);
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_0_has_bb_dirtied = true;
              x_88->meta->bb_0_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1460 == "display") {
            WriteMetric();
            x_88->has_prop_display = false;
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_88->has_prop_display = true;
            x_88->prop_display = AsDEString(x_96);
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1460 == "position") {
            WriteMetric();
            x_88->has_prop_position = false;
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_88->has_prop_position = true;
            x_88->prop_position = AsDEString(x_96);
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1460 == "flex-shrink") {
            WriteMetric();
            x_88->has_prop_flex_shrink = false;
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_88->has_prop_flex_shrink = true;
            x_88->prop_flex_shrink = AsDEString(x_96);
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_1460 == "flex-direction") {
            WriteMetric();
            x_88->has_prop_flex_direction = false;
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_88->has_prop_flex_direction = true;
            x_88->prop_flex_direction = AsDEString(x_96);
            if (x_88->meta->pass_0_proc_inited) {
              x_88->meta->bb_1_has_bb_dirtied = true;
              x_88->meta->bb_1_bb_dirtied = true;
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_90, const auto &x_91) { return x_86(x_91, ListNthExn(x_88->children, x_90), x_89); });
}
Unit replace_value_x_34(const auto &x_87, const auto &x_88, const auto &x_89) { return x_86(x_87, x_88, x_89); }
Unit x_97(const auto &x_98, const auto &x_99, const auto &x_100) {
  auto x_101 = ListHeadExn(x_98);
  auto x_102 = ListTailExn(x_98);
  if (ListIsEmpty(x_102)) {
    InputChangeMetric(IntAdd(node_size_x_4(ListNthExn(x_99->children, x_101)), node_size_x_4(x_100)));
    auto x_103 = ListSplitN(x_99->children, x_101);
    auto x_104 = Zro(x_103);
    auto x_105 = Fst(x_103);
    auto x_106 = ListHeadExn(x_105);
    auto x_107 = ListTailExn(x_105);
    x_99->children = ListAppend(x_104, x_107);
    OptionMatch(
        x_106->prev, [&](const auto &x_109) { return MakeUnit(); },
        [&](const auto &x_108) {
          x_108->next = ToPath(x_106->next);
          return MakeUnit();
        });
    OptionMatch(
        x_106->next, [&](const auto &x_111) { return MakeUnit(); },
        [&](const auto &x_110) {
          x_110->prev = ToPath(x_106->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_104)) {
      x_99->first = ToPath(ListHead(x_107));
    }
    if (ListIsEmpty(x_107)) {
      x_99->last = ToPath(ListLast(x_104));
    }
    OptionMatch(
        x_106->next, [&](const auto &x_113) { return MakeUnit(); },
        [&](const auto &x_112) {
          if (x_112->meta->pass_0_proc_inited) {
            x_112->meta->bb_1_has_bb_dirtied = true;
            x_112->meta->bb_1_bb_dirtied = true;
            return MakeUnit();
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_99->children)) {
      if (x_99->meta->pass_0_proc_inited) {
        x_99->meta->bb_0_has_bb_dirtied = true;
        x_99->meta->bb_0_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_107)) {
      if (x_99->meta->pass_0_proc_inited) {
        x_99->meta->bb_0_has_bb_dirtied = true;
        x_99->meta->bb_0_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_106->next, [&](const auto &x_115) { return MakeUnit(); },
        [&](const auto &x_114) {
          if (x_114->meta->pass_0_proc_inited) {
            x_114->meta->bb_0_has_bb_dirtied = true;
            x_114->meta->bb_0_bb_dirtied = true;
            return MakeUnit();
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_99->children)) {
      if (x_99->meta->pass_1_proc_inited) {
        x_99->meta->bb_3_has_bb_dirtied = true;
        x_99->meta->bb_3_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_107)) {
      if (x_99->meta->pass_1_proc_inited) {
        x_99->meta->bb_3_has_bb_dirtied = true;
        x_99->meta->bb_3_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_106->next, [&](const auto &x_117) { return MakeUnit(); },
        [&](const auto &x_116) {
          if (x_116->meta->pass_1_proc_inited) {
            x_116->meta->bb_3_has_bb_dirtied = true;
            x_116->meta->bb_3_bb_dirtied = true;
            return MakeUnit();
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    auto x_118 = ListSplitN(x_99->children, x_101);
    auto x_119 = Zro(x_118);
    auto x_120 = Fst(x_118);
    x_99->children = ListAppend(x_119, Cons(x_100, x_120));
    if (ListIsEmpty(x_119)) {
      x_99->first = x_100.get();
    }
    if (ListIsEmpty(x_120)) {
      x_99->last = x_100.get();
    }
    OptionMatch(
        ListLast(x_119),
        [&](const auto &x_122) {
          x_100->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_121) {
          x_100->prev = x_121.get();
          x_121->next = x_100.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_120),
        [&](const auto &x_124) {
          x_100->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_123) {
          x_100->next = x_123.get();
          x_123->prev = x_100.get();
          return MakeUnit();
        });
    x_100->parent = x_99.get();
    MakeUnit();
    OptionMatch(
        x_100->next, [&](const auto &x_127) { return MakeUnit(); },
        [&](const auto &x_126) {
          if (x_126->meta->pass_0_proc_inited) {
            x_126->meta->bb_1_has_bb_dirtied = true;
            x_126->meta->bb_1_bb_dirtied = true;
            return MakeUnit();
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_99->children)) {
      if (x_99->meta->pass_0_proc_inited) {
        x_99->meta->bb_0_has_bb_dirtied = true;
        x_99->meta->bb_0_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_120)) {
      if (x_99->meta->pass_0_proc_inited) {
        x_99->meta->bb_0_has_bb_dirtied = true;
        x_99->meta->bb_0_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_100->next, [&](const auto &x_129) { return MakeUnit(); },
        [&](const auto &x_128) {
          if (x_128->meta->pass_0_proc_inited) {
            x_128->meta->bb_0_has_bb_dirtied = true;
            x_128->meta->bb_0_bb_dirtied = true;
            return MakeUnit();
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    if (ListIsSingleton(x_99->children)) {
      if (x_99->meta->pass_1_proc_inited) {
        x_99->meta->bb_3_has_bb_dirtied = true;
        x_99->meta->bb_3_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_120)) {
      if (x_99->meta->pass_1_proc_inited) {
        x_99->meta->bb_3_has_bb_dirtied = true;
        x_99->meta->bb_3_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_100->next, [&](const auto &x_132) { return MakeUnit(); },
        [&](const auto &x_131) {
          if (x_131->meta->pass_1_proc_inited) {
            x_131->meta->bb_3_has_bb_dirtied = true;
            x_131->meta->bb_3_bb_dirtied = true;
            return MakeUnit();
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_97(x_102, ListNthExn(x_99->children, x_101), x_100);
  }
}
Unit replace_node_x_32(const auto &x_98, const auto &x_99, const auto &x_100) { return x_97(x_98, x_99, x_100); }
Unit x_133(const auto &x_134) {
  ListIter2(x_134->children, [&](const auto &x_135, const auto &x_136) {
    x_135->parent = x_134.get();
    x_136->parent = x_134.get();
    x_135->next = x_136.get();
    x_136->prev = x_135.get();
    x_133(x_135);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_134->children),
      [&](const auto &x_138) {
        x_134->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_137) {
        x_134->first = x_137.get();
        x_137->parent = x_134.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_134->children),
      [&](const auto &x_140) {
        x_134->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_139) {
        x_134->last = x_139.get();
        x_139->parent = x_134.get();
        x_133(x_139);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_30(const auto &x_134) { return x_133(x_134); }
Unit x_141(const auto &x_142, const auto &x_143, const auto &x_144) {
  auto x_145 = ListHeadExn(x_142);
  auto x_146 = ListTailExn(x_142);
  if (ListIsEmpty(x_146)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_143->children, x_145)));
    auto x_147 = ListSplitN(x_143->children, x_145);
    auto x_148 = Zro(x_147);
    auto x_149 = Fst(x_147);
    auto x_150 = ListHeadExn(x_149);
    auto x_151 = ListTailExn(x_149);
    x_143->children = ListAppend(x_148, x_151);
    OptionMatch(
        x_150->prev, [&](const auto &x_153) { return MakeUnit(); },
        [&](const auto &x_152) {
          x_152->next = ToPath(x_150->next);
          return MakeUnit();
        });
    OptionMatch(
        x_150->next, [&](const auto &x_155) { return MakeUnit(); },
        [&](const auto &x_154) {
          x_154->prev = ToPath(x_150->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_148)) {
      x_143->first = ToPath(ListHead(x_151));
    }
    if (ListIsEmpty(x_151)) {
      x_143->last = ToPath(ListLast(x_148));
    }
    OptionMatch(
        x_150->next, [&](const auto &x_157) { return MakeUnit(); },
        [&](const auto &x_156) {
          if (x_156->meta->pass_0_proc_inited) {
            x_156->meta->bb_1_has_bb_dirtied = true;
            x_156->meta->bb_1_bb_dirtied = true;
            return MakeUnit();
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_143->children)) {
      if (x_143->meta->pass_0_proc_inited) {
        x_143->meta->bb_0_has_bb_dirtied = true;
        x_143->meta->bb_0_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_151)) {
      if (x_143->meta->pass_0_proc_inited) {
        x_143->meta->bb_0_has_bb_dirtied = true;
        x_143->meta->bb_0_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_150->next, [&](const auto &x_159) { return MakeUnit(); },
        [&](const auto &x_158) {
          if (x_158->meta->pass_0_proc_inited) {
            x_158->meta->bb_0_has_bb_dirtied = true;
            x_158->meta->bb_0_bb_dirtied = true;
            return MakeUnit();
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_143->children)) {
      if (x_143->meta->pass_1_proc_inited) {
        x_143->meta->bb_3_has_bb_dirtied = true;
        x_143->meta->bb_3_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_151)) {
      if (x_143->meta->pass_1_proc_inited) {
        x_143->meta->bb_3_has_bb_dirtied = true;
        x_143->meta->bb_3_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_150->next, [&](const auto &x_161) { return MakeUnit(); },
        [&](const auto &x_160) {
          if (x_160->meta->pass_1_proc_inited) {
            x_160->meta->bb_3_has_bb_dirtied = true;
            x_160->meta->bb_3_bb_dirtied = true;
            return MakeUnit();
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_141(x_146, ListNthExn(x_143->children, x_145), x_144);
  }
}
Unit remove_node_x_28(const auto &x_142, const auto &x_143, const auto &x_144) { return x_141(x_142, x_143, x_144); }
Unit recalculate_x_26(const auto &x_162) {
  StartRecordOverhead();
  recalculate_internal_x_163(x_162);
  recalculate_internal_x_164(x_162);
  StopRecordOverhead();
  return MakeUnit();
}
Unit x_165(const auto &x_166, const auto &x_167, const auto &x_168) {
  auto x_169 = ListHeadExn(x_166);
  auto x_170 = ListTailExn(x_166);
  if (ListIsEmpty(x_170)) {
    InputChangeMetric(node_size_x_4(x_168));
    auto x_171 = ListSplitN(x_167->children, x_169);
    auto x_172 = Zro(x_171);
    auto x_173 = Fst(x_171);
    x_167->children = ListAppend(x_172, Cons(x_168, x_173));
    if (ListIsEmpty(x_172)) {
      x_167->first = x_168.get();
    }
    if (ListIsEmpty(x_173)) {
      x_167->last = x_168.get();
    }
    OptionMatch(
        ListLast(x_172),
        [&](const auto &x_175) {
          x_168->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_174) {
          x_168->prev = x_174.get();
          x_174->next = x_168.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_173),
        [&](const auto &x_177) {
          x_168->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_176) {
          x_168->next = x_176.get();
          x_176->prev = x_168.get();
          return MakeUnit();
        });
    x_168->parent = x_167.get();
    MakeUnit();
    OptionMatch(
        x_168->next, [&](const auto &x_180) { return MakeUnit(); },
        [&](const auto &x_179) {
          if (x_179->meta->pass_0_proc_inited) {
            x_179->meta->bb_1_has_bb_dirtied = true;
            x_179->meta->bb_1_bb_dirtied = true;
            return MakeUnit();
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_167->children)) {
      if (x_167->meta->pass_0_proc_inited) {
        x_167->meta->bb_0_has_bb_dirtied = true;
        x_167->meta->bb_0_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_173)) {
      if (x_167->meta->pass_0_proc_inited) {
        x_167->meta->bb_0_has_bb_dirtied = true;
        x_167->meta->bb_0_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_168->next, [&](const auto &x_182) { return MakeUnit(); },
        [&](const auto &x_181) {
          if (x_181->meta->pass_0_proc_inited) {
            x_181->meta->bb_0_has_bb_dirtied = true;
            x_181->meta->bb_0_bb_dirtied = true;
            return MakeUnit();
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    if (ListIsSingleton(x_167->children)) {
      if (x_167->meta->pass_1_proc_inited) {
        x_167->meta->bb_3_has_bb_dirtied = true;
        x_167->meta->bb_3_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_173)) {
      if (x_167->meta->pass_1_proc_inited) {
        x_167->meta->bb_3_has_bb_dirtied = true;
        x_167->meta->bb_3_bb_dirtied = true;
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_168->next, [&](const auto &x_185) { return MakeUnit(); },
        [&](const auto &x_184) {
          if (x_184->meta->pass_1_proc_inited) {
            x_184->meta->bb_3_has_bb_dirtied = true;
            x_184->meta->bb_3_bb_dirtied = true;
            return MakeUnit();
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_165(x_170, ListNthExn(x_167->children, x_169), x_168);
  }
}
Unit add_node_x_25(const auto &x_166, const auto &x_167, const auto &x_168) { return x_165(x_166, x_167, x_168); }
Unit x_186(const auto &x_187) {
  ListIter2(x_187->children, [&](const auto &x_188, const auto &x_189) {
    x_188->parent = x_187.get();
    x_189->parent = x_187.get();
    x_188->next = x_189.get();
    x_189->prev = x_188.get();
    x_186(x_188);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_187->children),
      [&](const auto &x_191) {
        x_187->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_190) {
        x_187->first = x_190.get();
        x_190->parent = x_187.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_187->children),
      [&](const auto &x_193) {
        x_187->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_192) {
        x_187->last = x_192.get();
        x_192->parent = x_187.get();
        x_186(x_192);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_23(const auto &x_187) { return x_186(x_187); }
Unit eval_stmts_x_19(const auto &x_194) {
  RecordOverhead([&](const auto &x_195) {
    x_194->meta->bb_3_has_bb_dirtied = true;
    x_194->meta->bb_3_bb_dirtied = false;
    return MakeUnit();
  });
  eval_stmts_x_196(x_194);
  ListIter(x_194->children, [&](const auto &x_197) {
    RecordOverhead([&](const auto &x_198) {
      x_197->meta->pass_1_proc_inited = true;
      return MakeUnit();
    });
    eval_stmts_x_19(x_197);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_199) {
    x_194->meta->bb_2_has_bb_dirtied = true;
    x_194->meta->bb_2_bb_dirtied = false;
    return MakeUnit();
  });
  eval_stmts_x_200(x_194);
  return MakeUnit();
}
Unit eval_stmts_x_17(const auto &x_201) {
  RecordOverhead([&](const auto &x_202) {
    x_201->meta->bb_1_has_bb_dirtied = true;
    x_201->meta->bb_1_bb_dirtied = false;
    return MakeUnit();
  });
  eval_stmts_x_203(x_201);
  ListIter(x_201->children, [&](const auto &x_204) {
    RecordOverhead([&](const auto &x_205) {
      x_204->meta->pass_0_proc_inited = true;
      return MakeUnit();
    });
    eval_stmts_x_17(x_204);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_206) {
    x_201->meta->bb_0_has_bb_dirtied = true;
    x_201->meta->bb_0_bb_dirtied = false;
    return MakeUnit();
  });
  eval_stmts_x_207(x_201);
  return MakeUnit();
}
Unit x_208(const auto &x_209) {
  ListIter2(x_209->children, [&](const auto &x_210, const auto &x_211) {
    x_210->parent = x_209.get();
    x_211->parent = x_209.get();
    x_210->next = x_211.get();
    x_211->prev = x_210.get();
    x_208(x_210);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_209->children),
      [&](const auto &x_213) {
        x_209->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_212) {
        x_209->first = x_212.get();
        x_212->parent = x_209.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_209->children),
      [&](const auto &x_215) {
        x_209->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_214) {
        x_209->last = x_214.get();
        x_214->parent = x_209.get();
        x_208(x_214);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_209) { return x_208(x_209); }
int64_t x_216(const auto &x_217) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_217->children, [&](const auto &x_218) { return x_216(x_218); }));
}
int64_t node_size_x_4(const auto &x_217) { return x_216(x_217); }
int64_t x_219(const auto &x_220) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_220->children, [&](const auto &x_221) { return x_219(x_221); }));
}
int64_t layout_size_x_3(const auto &x_220) { return x_219(x_220); }
LayoutNode x_222(const auto &x_223) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_223)), [&](const auto &x_224) { return x_222(x_224); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_223) { return x_222(x_223); }
Node x_225(const auto &x_226) {
  return MakeNode(x_226->name, x_226->attr, x_226->prop, x_226->extern_id,
                  ListMap(x_226->children, [&](const auto &x_227) { return x_225(x_227); }));
}
Node node_to_fs_node_x_1(const auto &x_226) { return x_225(x_226); }
Node x_228(const auto &x_229) {
  return MakeNode(JsonToString(JsonMember("name", x_229)), JsonToDict(JsonMember("attributes", x_229)),
                  JsonToDict(JsonMember("properties", x_229)), JsonToInt(JsonMember("id", x_229)),
                  ListMap(JsonToList(JsonMember("children", x_229)), [&](const auto &x_230) { return x_228(x_230); }));
}
Node json_to_node_aux_x_0(const auto &x_229) { return x_228(x_229); }
int main() {
  tos = new TotalOrderS();
  current_time = MakeRef(tos->smallest());
  WithOutFile("wikipedia_hover.out", [&](const auto &x_5) {
    PrintEndline("RUNNING NE_D");
    return WithInFile("command.json", [&](const auto &x_6) {
      auto x_7 = MakeRef(static_cast<int64_t>(0));
      auto x_9 = JsonOfString(InputLine(x_6));
      auto x_10 = JsonOfString(InputLine(x_6));
      auto x_11 = MakeStack();
      PushStack(x_11, x_9);
      PushStack(x_11, x_10);
      Assert(StringEqual(JsonToString(JsonMember("name", x_9)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_10)), "layout_init"));
      auto x_14 = [&]() {
        auto x_12 = json_to_node_aux_x_0(JsonMember("node", x_9));
        x_12->parent = nullptr;
        x_12->prev = nullptr;
        x_12->next = nullptr;
        set_children_relation_x_13(x_12);
        return x_12;
      }();
      auto x_15 = json_to_layout_node_x_2(JsonMember("node", x_10));
      OutputChangeMetric(layout_size_x_3(x_15));
      InputChangeMetric(node_size_x_4(x_14));
      RecordOverhead([&](const auto &x_16) {
        x_14->meta->pass_0_proc_inited = true;
        return MakeUnit();
      });
      eval_stmts_x_17(x_14);
      RecordOverhead([&](const auto &x_18) {
        x_14->meta->pass_1_proc_inited = true;
        return MakeUnit();
      });
      eval_stmts_x_19(x_14);
      JsonToChannel(x_5, [&]() {
        auto x_1461 = FreshJson();
        WriteJson(x_1461, "name", "NE_D");
        WriteJson(x_1461, "diff_num", ReadRef(x_7));
        WriteJson(x_1461, "read_count", MetricReadCount());
        WriteJson(x_1461, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_1461, "write_count", MetricWriteCount());
        WriteJson(x_1461, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_1461, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_1461, "input_change_count", MetricInputChangeCount());
        WriteJson(x_1461, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_1461, "overhead_time", MetricOverheadTime());
        WriteJson(x_1461, "overhead_l2m", MetricOverheadL2m());
        WriteJson(x_1461, "eval_time", MetricEvalCount());
        WriteJson(x_1461, "html", "");
        WriteJson(x_1461, "command", StackToList(x_11));
        return x_1461;
      }());
      OutputString(x_5, "\n");
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_6, [&](const auto &x_20) {
        auto x_21 = JsonOfString(x_20);
        PushStack(x_11, x_21);
        std::string x_1463 = JsonToString(JsonMember("name", x_21));
        if (x_1463 == "add") {
          return add_node_x_25(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_24) { return JsonToInt(x_24); }), x_14,
              [&]() {
                auto x_22 = json_to_node_aux_x_0(JsonMember("node", x_21));
                x_22->parent = nullptr;
                x_22->prev = nullptr;
                x_22->next = nullptr;
                set_children_relation_x_23(x_22);
                return x_22;
              }());
        } else if (x_1463 == "recalculate") {
          recalculate_x_26(x_14);
          JsonToChannel(x_5, [&]() {
            auto x_1462 = FreshJson();
            WriteJson(x_1462, "name", "NE_D");
            WriteJson(x_1462, "diff_num", ReadRef(x_7));
            WriteJson(x_1462, "read_count", MetricReadCount());
            WriteJson(x_1462, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_1462, "write_count", MetricWriteCount());
            WriteJson(x_1462, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_1462, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_1462, "input_change_count", MetricInputChangeCount());
            WriteJson(x_1462, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_1462, "overhead_time", MetricOverheadTime());
            WriteJson(x_1462, "overhead_l2m", MetricOverheadL2m());
            WriteJson(x_1462, "eval_time", MetricEvalCount());
            WriteJson(x_1462, "html", "");
            WriteJson(x_1462, "command", StackToList(x_11));
            return x_1462;
          }());
          OutputString(x_5, "\n");
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_1463 == "remove") {
          return remove_node_x_28(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_27) { return JsonToInt(x_27); }), x_14,
              MakeUnit());
        } else if (x_1463 == "replace") {
          return replace_node_x_32(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_31) { return JsonToInt(x_31); }), x_14,
              [&]() {
                auto x_29 = json_to_node_aux_x_0(JsonMember("node", x_21));
                x_29->parent = nullptr;
                x_29->prev = nullptr;
                x_29->next = nullptr;
                set_children_relation_x_30(x_29);
                return x_29;
              }());
        } else if (x_1463 == "replace_value") {
          return replace_value_x_34(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_33) { return JsonToInt(x_33); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_1463 == "delete_value") {
          return delete_value_x_36(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_35) { return JsonToInt(x_35); }), x_14,
              MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))));
        } else if (x_1463 == "insert_value") {
          return insert_value_x_38(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_37) { return JsonToInt(x_37); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_1463 == "layout_remove") {
          return remove_layout_node_x_40(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_39) { return JsonToInt(x_39); }), x_15,
              MakeUnit());
        } else if (x_1463 == "layout_add") {
          return add_layout_node_x_42(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_41) { return JsonToInt(x_41); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_1463 == "layout_replace") {
          return replace_layout_node_x_44(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_43) { return JsonToInt(x_43); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_1463 == "layout_info_changed") {
          return OutputChangeMetric(static_cast<int64_t>(1));
        } else {
          Panic();
        }
      });
      PrintEndline("INCREMENTAL EVAL OK!");
      MakeUnit();
      return MakeUnit();
    });
  });
  current_time = nullptr;
  delete tos;
}