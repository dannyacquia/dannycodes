<?php
/**
 * @file
 * hashcash_captcha_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hashcash_captcha_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
}
