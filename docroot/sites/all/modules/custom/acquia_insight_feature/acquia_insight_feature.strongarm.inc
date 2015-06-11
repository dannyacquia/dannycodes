<?php
/**
 * @file
 * acquia_insight_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function acquia_insight_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_dynamic_banner';
  $strongarm->value = 0;
  $export['acquia_dynamic_banner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_identifier';
  $strongarm->value = 'ACGH-76791';
  $export['acquia_identifier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_key';
  $strongarm->value = '253c8eb66fb03d987eb5b401a2dbf320';
  $export['acquia_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_admin_priv';
  $strongarm->value = 1;
  $export['acquia_spi_admin_priv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_boot_last';
  $strongarm->value = 1434007870;
  $export['acquia_spi_boot_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_cron_last';
  $strongarm->value = 1434007990;
  $export['acquia_spi_cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_def_timestamp';
  $strongarm->value = '1374783288';
  $export['acquia_spi_def_timestamp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_def_vars';
  $strongarm->value = array(
    'maintenance_mode' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_admin_priv' => array(
      'optional' => '0',
      'description' => '',
    ),
    'error_level' => array(
      'optional' => '0',
      'description' => '',
    ),
    'block_cache' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_send_node_user' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_email_verification' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_cancel_method' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_signatures' => array(
      'optional' => '0',
      'description' => '',
    ),
    'filter_fallback_format' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_admin_role' => array(
      'optional' => '0',
      'description' => '',
    ),
    'dblog_row_limit' => array(
      'optional' => '0',
      'description' => '',
    ),
    'file_default_scheme' => array(
      'optional' => '0',
      'description' => '',
    ),
    'install_profile' => array(
      'optional' => '0',
      'description' => '',
    ),
    'update_last_check' => array(
      'optional' => '0',
      'description' => '',
    ),
    'site_default_country' => array(
      'optional' => '0',
      'description' => '',
    ),
    'date_default_timezone' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_register' => array(
      'optional' => '0',
      'description' => '',
    ),
    'site_name' => array(
      'optional' => '0',
      'description' => '',
    ),
    'site_offline' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_send_watchdog' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_use_cron' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache_backends' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache_default_class' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache_inc' => array(
      'optional' => '0',
      'description' => '',
    ),
    'googleanalytics_cache' => array(
      'optional' => '0',
      'description' => '',
    ),
    'preprocess_js' => array(
      'optional' => '0',
      'description' => '',
    ),
    'page_cache_maximum_age' => array(
      'optional' => '0',
      'description' => '',
    ),
    'preprocess_css' => array(
      'optional' => '0',
      'description' => '',
    ),
    'page_compression' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache_lifetime' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cron_last' => array(
      'optional' => '0',
      'description' => '',
    ),
    'clean_url' => array(
      'optional' => '0',
      'description' => '',
    ),
    'redirect_global_clean' => array(
      'optional' => '0',
      'description' => '',
    ),
    'theme_zen_settings' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_module_diff_data' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cron_safe_threshold' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_def_timestamp' => array(
      'optional' => '0',
      'description' => '',
    ),
    'image_allow_insecure_derivatives' => array(
      'optional' => '0',
      'description' => '',
    ),
  );
  $export['acquia_spi_def_vars'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_module_diff_data';
  $strongarm->value = 1;
  $export['acquia_spi_module_diff_data'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_module_rebuild';
  $strongarm->value = 1434007990;
  $export['acquia_spi_module_rebuild'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_send_node_user';
  $strongarm->value = 1;
  $export['acquia_spi_send_node_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_send_watchdog';
  $strongarm->value = 1;
  $export['acquia_spi_send_watchdog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_set_variables_override';
  $strongarm->value = 0;
  $export['acquia_spi_set_variables_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_use_cron';
  $strongarm->value = 1;
  $export['acquia_spi_use_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_subscription_data';
  $strongarm->value = array(
    'timestamp' => 1434007990,
    'active' => '1',
    'href' => 'https://insight.acquia.com/node/uuid/e91b4006-d26f-4908-9cf4-c91a68206f75/dashboard',
    'uuid' => 'e91b4006-d26f-4908-9cf4-c91a68206f75',
    'subscription_name' => 'acquiauwilford',
    'expiration_date' => array(
      'value' => '2017-06-02T00:00:00',
    ),
    'product' => array(
      'view' => 'Acquia Network',
    ),
    'derived_key_salt' => '5a2000bf996ebb100bfbc9fc7a715ac7',
    'update_service' => '1',
    'search_service_enabled' => 1,
    'update' => array(),
    'heartbeat_data' => array(
      'search_service_enabled' => 1,
    ),
  );
  $export['acquia_subscription_data'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_subscription_name';
  $strongarm->value = 'acquiauwilford';
  $export['acquia_subscription_name'] = $strongarm;

  return $export;
}
