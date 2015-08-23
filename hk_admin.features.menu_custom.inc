<?php
/**
 * @file
 * hk_admin.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function hk_admin_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: crm-core-admin-menu.
  $menus['crm-core-admin-menu'] = array(
    'menu_name' => 'crm-core-admin-menu',
    'title' => 'CRM Core Admin Menu',
    'description' => 'Provides access to various settings and configuration within CRM Core.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: crm-core-menu.
  $menus['crm-core-menu'] = array(
    'menu_name' => 'crm-core-menu',
    'title' => 'CRM Core',
    'description' => 'Provides access to various features and functions within CRM Core.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-admin-menu.
  $menus['menu-admin-menu'] = array(
    'menu_name' => 'menu-admin-menu',
    'title' => 'Admin Menu',
    'description' => 'Admin Dashboard mit allen wichtigen Links zur Administration',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Dashboard mit allen wichtigen Links zur Administration');
  t('Admin Menu');
  t('CRM Core');
  t('CRM Core Admin Menu');
  t('Provides access to various features and functions within CRM Core.');
  t('Provides access to various settings and configuration within CRM Core.');


  return $menus;
}
