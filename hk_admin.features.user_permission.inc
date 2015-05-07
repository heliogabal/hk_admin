<?php
/**
 * @file
 * hk_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hk_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
      'Übersetzer' => 'Übersetzer',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'administer crm_core_contact entities'.
  $permissions['administer crm_core_contact entities'] = array(
    'name' => 'administer crm_core_contact entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_activity entities'.
  $permissions['create crm_core_activity entities'] = array(
    'name' => 'create crm_core_activity entities',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_contact entities'.
  $permissions['create crm_core_contact entities'] = array(
    'name' => 'create crm_core_contact entities',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_activity entity'.
  $permissions['edit any crm_core_activity entity'] = array(
    'name' => 'edit any crm_core_activity entity',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_contact entity'.
  $permissions['edit any crm_core_contact entity'] = array(
    'name' => 'edit any crm_core_contact entity',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'view crm dashboard'.
  $permissions['view crm dashboard'] = array(
    'name' => 'view crm dashboard',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_ui',
  );

  return $permissions;
}
