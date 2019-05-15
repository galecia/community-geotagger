<?php

/**
 * @file
 * geotagger.default_openlayers_styles.inc
 */

/**
 * Implements hook_default_openlayers_styles().
 */
function geotagger_default_openlayers_styles() {
  $export = array();

  $ol_style = new stdClass();
  $ol_style->disabled = FALSE; /* Edit this to true to make a default ol_style disabled initially */
  $ol_style->api_version = 1;
  $ol_style->machine_name = 'default_point_style';
  $ol_style->name = 'default point style';
  $ol_style->description = '';
  $ol_style->factory_service = 'openlayers.Style:Circle';
  $ol_style->options = array(
    'default' => array(
      'image' => array(
        'radius' => 5,
        'fill' => array(
          'color' => '255,255,255,0.4',
        ),
        'stroke' => array(
          'color' => '51,153,204,1',
          'width' => 1.25,
          'lineDash' => '0,0',
        ),
      ),
      'stroke' => array(
        'color' => '51,153,204,1',
        'width' => 1.25,
        'lineDash' => '0,0',
      ),
      'fill' => array(
        'color' => '51,153,204,1',
      ),
    ),
    'Point' => array(
      'enabled' => 1,
      'image' => array(
        'radius' => 5,
        'fill' => array(
          'color' => '200,20,20,0.6',
        ),
        'stroke' => array(
          'color' => '200,20,20,1',
          'width' => 2,
          'lineDash' => '0,0',
        ),
      ),
      'stroke' => array(
        'color' => '51,153,204,1',
        'width' => 1.25,
        'lineDash' => '0,0',
      ),
      'fill' => array(
        'color' => '51,153,204,1',
      ),
    ),
    'Polygon' => array(
      'enabled' => 1,
      'image' => array(
        'radius' => 5,
        'fill' => array(
          'color' => '255,255,255,0.4',
        ),
        'stroke' => array(
          'color' => '51,153,204,1',
          'width' => 1.25,
          'lineDash' => '0,0',
        ),
      ),
      'stroke' => array(
        'color' => '51,153,204,1',
        'width' => 1.25,
        'lineDash' => '0,0',
      ),
      'fill' => array(
        'color' => '51,153,204,1',
      ),
    ),
    'GeometryCollection' => array(
      'enabled' => 1,
      'image' => array(
        'radius' => 5,
        'fill' => array(
          'color' => '255,255,255,0.4',
        ),
        'stroke' => array(
          'color' => '51,153,204,1',
          'width' => 1.25,
          'lineDash' => '0,0',
        ),
      ),
      'stroke' => array(
        'color' => '51,153,204,1',
        'width' => 1.25,
        'lineDash' => '0,0',
      ),
      'fill' => array(
        'color' => '51,153,204,1',
      ),
    ),
  );
  $export['default_point_style'] = $ol_style;

  return $export;
}
