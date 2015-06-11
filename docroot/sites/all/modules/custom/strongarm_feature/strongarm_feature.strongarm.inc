<?php
/**
 * @file
 * strongarm_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function strongarm_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_blog';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_ctools_css';
  $strongarm->value = 'CToolsCssCache';
  $export['cache_class_cache_ctools_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_add_captcha_description';
  $strongarm->value = 1;
  $export['captcha_add_captcha_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_administration_mode';
  $strongarm->value = 0;
  $export['captcha_administration_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_allow_on_admin_pages';
  $strongarm->value = 0;
  $export['captcha_allow_on_admin_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_challenge';
  $strongarm->value = 'pow_captcha/Proof-of-Work CAPTCHA';
  $export['captcha_default_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_challenge_on_nonlisted_forms';
  $strongarm->value = 0;
  $export['captcha_default_challenge_on_nonlisted_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_validation';
  $strongarm->value = '1';
  $export['captcha_default_validation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description';
  $strongarm->value = 'This question is for testing whether or not you are a human visitor and to prevent automated spam submissions.';
  $export['captcha_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_enable_stats';
  $strongarm->value = 0;
  $export['captcha_enable_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_log_wrong_responses';
  $strongarm->value = 0;
  $export['captcha_log_wrong_responses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_persistence';
  $strongarm->value = '1';
  $export['captcha_persistence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = 'ObS3wGaNr0H5h5jjylnRZ-6ljfesWO0wORfveaoaoFs';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1434009391;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'nprsq0';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1433928910;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/New_York';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disqus_nodetypes_default';
  $strongarm->value = array(
    'blog' => 'blog',
    'article' => 0,
    'page' => 0,
  );
  $export['disqus_nodetypes_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disqus_useraccesstoken';
  $strongarm->value = '';
  $export['disqus_useraccesstoken'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'YLTvSQn-YyjeDjz8o1dVdO5sDk6kk9Cw2nzXY7mPxWA';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'article_feature' => array(
      'node' => '0ff501cb6696366d75a8de30e797fc21',
      'variable' => 'c3c3ed1cfe23f0946011c308370e62d5',
      'field_instance' => 'c12d7c8715226389843b300c508873a1',
      'dependencies' => '817f82dcea583432f19568ba34a4aa85',
    ),
    'field_bases_feature' => array(
      'field_base' => '0328ec3214566543865f2107293c522b',
      'taxonomy' => 'dcbaffe2f734b63a1b42ea0991c9fef9',
      'dependencies' => '4168cedb504003825ac53c98dda4b047',
      'field_instance' => '9ccc0f69a14c6d9a0dbb67e6ad6e6d12',
    ),
    'blog_features' => array(
      'node' => '91448d68a86e5e5168669ece2843970f',
      'variable' => '6d51f0b963ef83a8fabe807125681dd2',
      'field_instance' => 'd82edfabe25429d82e89e6abdec32553',
      'dependencies' => '5e4cb779be5b89cfc6ecc7344edf3768',
      'field_base' => '1da40c087eecd467e1a1c42850d4ffa9',
      'taxonomy' => 'bf93e5638e07fb1e7fc14a39724254bf',
    ),
    'hashcash_captcha_feature' => array(
      'dependencies' => '90f2bbee245fa87a7cf31a26fc6264bb',
      'captcha_points' => 'd7f1919eda849bf45de39d77d2d45e62',
    ),
    'basic_page_feature' => array(
      'node' => '08acc4d1646d2dd23b9ff7250108890b',
      'variable' => '9280fbd8d15bbd4bc7cf049e7f2fc625',
      'field_instance' => '67452de60420c19dbd9b744a5175b0f4',
      'dependencies' => 'd0016cac4dbd38f38e66959840dbc472',
    ),
    'menu_feature' => array(
      'menu_custom' => '197d07d37eacad2beba6ceb6d6080cfd',
      'menu_links' => '524070445ed72354c7f63caed389ab37',
      'dependencies' => 'ce43b2cc540f90d9ef38740c8f0b0f83',
    ),
    'permissions_and_roles_feature' => array(
      'user_role' => '57d23ee3deb6e9262fa3b2617586b072',
      'user_permission' => '083144520ec0c8275b98db1684231c17',
      'dependencies' => '0e26279b6ebcc2b88ecc3279728adf72',
    ),
    'text_and_wysiwyg_feature' => array(
      'filter' => 'e1ba718b9bb5189bfb3604dcce922498',
      'wysiwyg' => '14ec36e1ca1af45c190f0c692281fa56',
      'dependencies' => 'c317658c8905b7a9253f47d99a416429',
    ),
    'strongarm_feature' => array(
      'variable' => 'a1c8ae5b32a2b1497135adcd17262760',
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'acquia_insight_feature' => array(
      'variable' => '0de9450b8268337a6504c41cc153f082',
      'dependencies' => '03950dd87d65a91fd1d2921347c16465',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'standard';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1433512940;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode';
  $strongarm->value = FALSE;
  $export['maintenance_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 501,
    1 => 493,
    2 => 250,
    3 => 247,
    4 => 246,
    5 => 245,
    6 => 125,
    7 => 124,
    8 => 123,
    9 => 122,
    10 => 121,
    11 => 117,
    12 => 63,
    13 => 62,
    14 => 61,
    15 => 60,
    16 => 59,
    17 => 58,
    18 => 44,
    19 => 31,
    20 => 30,
    21 => 29,
    22 => 28,
    23 => 24,
    24 => 23,
    25 => 21,
    26 => 15,
    27 => 14,
    28 => 13,
    29 => 11,
    30 => 7,
    31 => 6,
    32 => 5,
    33 => 3,
    34 => 2,
    35 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_cron_last';
  $strongarm->value = '1433985032';
  $export['node_cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'node' => TRUE,
    'taxonomy' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pow_captcha_complexity';
  $strongarm->value = '0.01';
  $export['pow_captcha_complexity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pow_captcha_key';
  $strongarm->value = 'PRIVATE-56e71756-168d-42bb-96a0-f6a08df6fccd';
  $export['pow_captcha_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pow_captcha_public_key';
  $strongarm->value = 'e8493211-d219-434a-9237-dd4c3b1bd196';
  $export['pow_captcha_public_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_blog';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'settings__active_tab';
  $strongarm->value = 'edit-visibility';
  $export['settings__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'US';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'danny@dannycod.es';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'dannycodes';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_blogger_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'breadcrumbs' => 1,
    'image_logo' => 0,
    'slideshow_display' => 0,
    'slide1_head' => 'Sample product',
    'slide1_desc' => 'Sed do eiusmod tempor incididunt elit...',
    'slide1_url' => 'node/1',
    'slide2_head' => 'Sample service',
    'slide2_desc' => 'Lorem ipsum dolor sit amet, consectetur...',
    'slide2_url' => 'node/2',
    'slide3_head' => 'Contact us',
    'slide3_desc' => 'Duis aute irure dolor in reprehenderit...',
    'slide3_url' => 'node/3',
  );
  $export['theme_blogger_theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'blogger_theme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_mothership_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'mothership_poorthemers_helper' => 1,
    'mothership_rebuild_registry' => 0,
    'mothership_test' => 0,
    'mothership_mediaquery_indicator' => 1,
    'mothership_script_place_footer' => 1,
    'mothership_js_onefile' => 0,
    'mothership_js_jquery_latest' => 0,
    'mothership_js_jquerycdn' => 0,
    'mothership_js_jquerycdn_version' => '0',
    'mothership_respondjs' => 1,
    'mothership_modernizr' => 0,
    'mothership_selectivizr' => 0,
    'mothership_js_nuke_module' => 0,
    'mothership_js_nuke_module_contrib' => 0,
    'mothership_js_nuke_misc' => 0,
    'mothership_js_freeform' => '',
    'mothership_css_onefile' => 0,
    'mothership_css_reset' => 0,
    'mothership_css_reset_html5' => 0,
    'mothership_css_normalize' => 1,
    'mothership_css_layout' => 1,
    'mothership_css_default' => 1,
    'mothership_css_mothershipstyles' => 1,
    'mothership_css_nuke_theme' => 0,
    'mothership_css_nuke_admin' => 0,
    'mothership_css_nuke_module_contrib' => 0,
    'mothership_css_nuke_module_all' => 0,
    'mothership_css_nuke_book' => 0,
    'mothership_css_nuke_systemtoolbar' => 0,
    'mothership_css_nuke_system_message' => 0,
    'mothership_css_nuke_system_menus' => 0,
    'mothership_css_nuke_system_theme' => 0,
    'mothership_css_freeform' => '',
    'mothership_classes_body_html' => 1,
    'mothership_classes_body_loggedin' => 1,
    'mothership_classes_body_front' => 0,
    'mothership_classes_body_layout' => 0,
    'mothership_classes_body_toolbar' => 0,
    'mothership_classes_body_pagenode' => 1,
    'mothership_classes_body_nodetype' => 0,
    'mothership_classes_body_path' => 1,
    'mothership_classes_body_path_first' => 0,
    'mothership_classes_body_status' => 0,
    'mothership_classes_body_freeform' => '',
    'mothership_region_wrapper' => 1,
    'mothership_classes_region' => 1,
    'mothership_classes_region_freeform' => '',
    'mothership_classes_block' => 1,
    'mothership_classes_block_id' => 1,
    'mothership_classes_block_id_as_class' => 0,
    'mothership_classes_block_contentdiv' => 1,
    'mothership_classes_block_freeform' => '',
    'mothership_classes_node' => 1,
    'mothership_classes_node_state' => 0,
    'mothership_classes_node_id' => 0,
    'mothership_classes_node_freeform' => '',
    'mothership_classes_node_links_inline' => 0,
    'mothership_classes_node_links_links' => 0,
    'mothership_classes_field_field' => 0,
    'mothership_classes_field_name' => 1,
    'mothership_classes_field_type' => 0,
    'mothership_classes_field_label' => 1,
    'mothership_classes_field_freeform' => '',
    'mothership_classes_form_container_wrapper' => 0,
    'mothership_classes_form_container_type' => 0,
    'mothership_classes_form_container_name' => 0,
    'mothership_classes_form_container_widget' => 0,
    'mothership_classes_form_container_id' => 0,
    'mothership_classes_form_wrapper_formitem' => 1,
    'mothership_classes_form_wrapper_formtype' => 0,
    'mothership_classes_form_wrapper_formname' => 1,
    'mothership_classes_form_freeform' => '',
    'mothership_classes_form_label' => 1,
    'mothership_classes_form_input' => 1,
    'mothership_form_required' => 1,
    'mothership_classes_form_description' => 1,
    'mothership_classes_form_placeholder_label' => 0,
    'mothership_classes_form_placeholder_link' => '',
    'mothership_classes_form_placeholder_email' => '',
    'mothership_classes_menu_items_mlid' => 1,
    'mothership_classes_menu_wrapper' => 1,
    'mothership_classes_menu_items_firstlast' => 1,
    'mothership_classes_menu_items_active' => 0,
    'mothership_classes_menu_collapsed' => 0,
    'mothership_classes_menu_leaf' => 1,
    'mothership_classes_view' => 1,
    'mothership_classes_view_name' => 1,
    'mothership_classes_view_view_id' => 0,
    'mothership_classes_view_row' => 1,
    'mothership_classes_view_row_count' => 1,
    'mothership_classes_view_row_first_last' => 1,
    'mothership_classes_view_row_rename' => 1,
    'panels_seperator' => 1,
    'mothership_classes_state' => 0,
    'mothership_404' => 0,
    'mothership_frontpage_default_message' => 1,
    'mothership_content_block_wrapper' => 1,
    'mothership_goodies_login' => 1,
    'mothership_mobile' => 1,
    'mothership_viewport' => 1,
    'mothership_viewport_maximumscale' => 0,
  );
  $export['theme_mothership_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1434009394;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'danny@dannycod.es',
  );
  $export['update_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '11';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 1;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '1';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'frontpage' => FALSE,
  );
  $export['views_defaults'] = $strongarm;

  return $export;
}
