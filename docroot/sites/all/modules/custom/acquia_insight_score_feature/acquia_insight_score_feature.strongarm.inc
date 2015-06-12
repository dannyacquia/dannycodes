<?php
/**
 * @file
 * acquia_insight_score_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function acquia_insight_score_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_block_last_cache';
  $strongarm->value = 1434111213;
  $export['twitter_block_last_cache'] = $strongarm;

  return $export;
}
