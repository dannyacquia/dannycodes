<?php
/**
 * @file
 * acquia_insight_score_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acquia_insight_score_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
