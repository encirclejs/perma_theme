<?php
/**
 * @file
 * page.vars.php

/**
 * Override or insert variables into the page template for HTML output.
 */



function perma_boot_preprocess_page(&$variables) {
      

  // Add information about the number of sidebars.
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-6"';
  }
  elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-8"';
  }
  else {
    $variables['content_column_class'] = ' class="col-sm-12"';
  }
    
  // Primary nav.
  $variables['primary_nav'] = FALSE;
  if ($variables['main_menu']) {
    // Build links.
    $variables['primary_nav'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
    // Provide default theme wrapper function.
    $variables['primary_nav']['#theme_wrappers'] = array('menu_tree__primary');
  }

  // Secondary nav.
  $variables['secondary_nav'] = FALSE;
  if ($variables['secondary_menu']) {
    // Build links.
    $variables['secondary_nav'] = menu_tree(variable_get('menu_secondary_links_source', 'user-menu'));
    // Provide default theme wrapper function.
    $variables['secondary_nav']['#theme_wrappers'] = array('menu_tree__secondary');
  }

  $variables['navbar_classes_array'] = array('navbar');

  if (theme_get_setting('permaculture_wales_navbar_position') !== '') {
    $variables['navbar_classes_array'][] = 'navbar-' . theme_get_setting('permaculture_wales_navbar_position');
  }
  else {
    $variables['navbar_classes_array'][] = 'container';
  }
  if (theme_get_setting('permaculture_wales_navbar_inverse')) {
    $variables['navbar_classes_array'][] = 'navbar-inverse';
  }
  else {
    $variables['navbar_classes_array'][] = 'navbar-default';
  }
}

/**
 * Functionality for Color Module
 */
function perma_boot_process_html(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}

function perma_boot_process_page(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
}