<?php
/**
 * @file
 * acquia_insight_score_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function acquia_insight_score_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer password policies'.
  $permissions['administer password policies'] = array(
    'name' => 'administer password policies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'administer seckit'.
  $permissions['administer seckit'] = array(
    'name' => 'administer seckit',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'seckit',
  );

  // Exported permission: 'force password change'.
  $permissions['force password change'] = array(
    'name' => 'force password change',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'unblock expired accounts'.
  $permissions['unblock expired accounts'] = array(
    'name' => 'unblock expired accounts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'password_policy',
  );

  return $permissions;
}
