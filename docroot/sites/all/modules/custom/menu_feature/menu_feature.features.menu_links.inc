<?php
/**
 * @file
 * menu_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/6
  $menu_links['main-menu_about:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'main-menu_about:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:contact
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_personal-blog:personal
  $menu_links['main-menu_personal-blog:personal'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'personal',
    'router_path' => 'personal',
    'link_title' => 'Personal Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_personal-blog:personal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_professional-blog:professional
  $menu_links['main-menu_professional-blog:professional'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'professional',
    'router_path' => 'professional',
    'link_title' => 'Professional Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_professional-blog:professional',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_tutorials:tutorials
  $menu_links['main-menu_tutorials:tutorials'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tutorials',
    'router_path' => 'tutorials',
    'link_title' => 'Tutorials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_tutorials:tutorials',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: management_administration-menu:admin/config/administration/admin_menu
  $menu_links['management_administration-menu:admin/config/administration/admin_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/admin_menu',
    'router_path' => 'admin/config/administration/admin_menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust administration menu settings.',
      ),
      'identifier' => 'management_administration-menu:admin/config/administration/admin_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin/config/administration',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Administration menu');
  t('Contact');
  t('Home');
  t('Personal Blog');
  t('Professional Blog');
  t('Tutorials');


  return $menu_links;
}
