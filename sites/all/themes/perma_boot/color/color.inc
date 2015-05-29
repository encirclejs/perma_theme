<?php

// Put the logo path into JavaScript for the live preview.
drupal_add_js(array('color' => array('logo' => theme_get_setting('logo', 'perma_boot'))), 'setting');

$info = array(
    // Available colors and color labels used in theme.
 
    'fields'    => array(
    'base'      => t('Base'),
    'hbkbg'     => t('Header Background'),
    'hhbg'      => t('Header Hover Active'),
    'bg'        => t('Main background'),
    'nlink'     => t('Nav Link'),
    'footer'    => t('Footer background'),
    'titleslogan' => t('Title and slogan'),
    'text'      => t('Text color'),
    'link'      => t('Link color'),
    'nlink'     => t('Nav Link'),
    'nlinkhov'  => t('Nav Link Hover'),
    'twitter'   =>  t('Twitter Panel'),
    'twittext'   =>  t('Twitter Text'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Permaculture (default)'),
      'colors' => array(
        'base' => '#FFFFFF',
        'hbkbg' => '#8da600',
        'hhbg' => '#809803',
        'bg' => '#DDF0DE',
        'footer' => '#EBDAAF',
        'titleslogan' => '#525252',
        'text' => '#3b3b3b',
        'link' => '#225b2c',
        'nlink' =>'#faeeee',
        'nlinkhov' =>'#d5efd9',
        'twitter'=>'#efefef',
        'twittext'=>'#dc6d26',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
