<?php
/**
 * @file
 * pro_101_ignore.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pro_101_ignore_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_cache';
  $strongarm->value = 0;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 0;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache';
  $strongarm->value = 1337334784;
  $export['cache_flush_cache'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_block';
  $strongarm->value = 1337334784;
  $export['cache_flush_cache_block'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_field';
  $strongarm->value = 1337334784;
  $export['cache_flush_cache_field'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_filter';
  $strongarm->value = 0;
  $export['cache_flush_cache_filter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_form';
  $strongarm->value = 1337334784;
  $export['cache_flush_cache_form'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_image';
  $strongarm->value = 0;
  $export['cache_flush_cache_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_menu';
  $strongarm->value = 1337334784;
  $export['cache_flush_cache_menu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_page';
  $strongarm->value = 1337334533;
  $export['cache_flush_cache_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_path';
  $strongarm->value = 1337334784;
  $export['cache_flush_cache_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_token';
  $strongarm->value = 0;
  $export['cache_flush_cache_token'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views';
  $strongarm->value = 1337334784;
  $export['cache_flush_cache_views'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views_data';
  $strongarm->value = 1337334784;
  $export['cache_flush_cache_views_data'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = 'rlC4puJRUhqZw-a6cMZiBNWzhI-gmQIqGeaugLTNF6s';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1337334784;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'm47pxh';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1337301723;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_hashes';
  $strongarm->value = array(
    0 => 'e77e67271cd3688488bd5f9755aad517',
    1 => '62af662e1cbe7927f09a6776daed5e9e',
    2 => '2f1132b273088c7cdfa59405fcc7ed25',
    3 => '214251c488b398afe676bce8681f68b5',
  );
  $export['defaultcontent_hashes'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_214251c488b398afe676bce8681f68b5';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_214251c488b398afe676bce8681f68b5'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_2f1132b273088c7cdfa59405fcc7ed25';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_2f1132b273088c7cdfa59405fcc7ed25'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_62af662e1cbe7927f09a6776daed5e9e';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_62af662e1cbe7927f09a6776daed5e9e'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_e77e67271cd3688488bd5f9755aad517';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_e77e67271cd3688488bd5f9755aad517'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'YqRHmOIEtXNb4QhzZ8ISDlGI-2JU-091M4rXcYXyXBc';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'featrues_tools_disable_features_page_js';
  $strongarm->value = 0;
  $export['featrues_tools_disable_features_page_js'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'pro_101_authoring_infrastructure' => array(
      'dependencies' => 'ee6df3db8892058ae0aef6297fb35d96',
      'ckeditor_profile' => 'ecc6139d4acc264f502a7cf580401d79',
      'filter' => '73b05af9d3c79db062988734cbc510e1',
      'user_permission' => '050b501990fa766402a2ea3e09ec5eea',
    ),
    'pro_101_build_infrastructure' => array(
      'dependencies' => '109279d27401911a59ea045d80f6515d',
      'user_role' => 'a0a90752e327f8b93ed391d4253be2a7',
      'user_permission' => '81dd82cd3575e7202871a99e7d72536d',
      'variable' => '1c597e25fbf01da39717ac4c1c85b335',
    ),
    'pro_101_core_infrastructure' => array(
      'dependencies' => '05bc5e5b0d3b4849d3970bbbe1123a7b',
      'user_permission' => 'f234497c99a7d923b6525deda02d4261',
      'variable' => '5bbcc8ec8b22e0a796d4fc5b5d6fc93f',
    ),
    'pro_101_media_infrastructure' => array(
      'dependencies' => '4abc1bea42224a9f5ec0b81eadc845a0',
      'user_permission' => '75317a5d1c6693e96f5e1f5fdd3e20cc',
      'variable' => 'e2425c552f1e47ddcd3eecc29f6c6f03',
    ),
    'pro_101_seo_infrastructure' => array(
      'dependencies' => '5c486c87f8bb57225f78fc8de1be0e6f',
      'user_permission' => '1847d1517707940a3e1d97539685de9a',
      'variable' => 'cc0c0d915841ce6e8ed2cb92689558f7',
    ),
    'pro_101_user_infrastructure' => array(
      'dependencies' => '9a43ea6d4fa09137853a08938f746e13',
      'field' => '4e2185239ddac64294b4d5b4cad43460',
      'user_permission' => '14c486d27f6daf9c7807354737dfe7a4',
      'variable' => '82ae659c39fe10e2a863cb8a7ec1fd89',
    ),
    'pro_101_about_feature_p' => array(
      'dependencies' => 'c4c4657cc65e665d8c5a4e27d3a45ddd',
      'context' => 'a0d3cb0102b86be4c3c998977e31390f',
      'views_view' => 'ca0df7f9bf28d1da4750efe4897f67e3',
    ),
    'pro_101_answers_feature' => array(
      'dependencies' => 'dc43cb414cfbe40b6086429d63b5898a',
      'field' => 'c4096e8c9478c10a2a9083b5f18c2d32',
      'taxonomy' => '85633b76e79a119d39483e8fdaa7ae6a',
      'user_permission' => '5835a1f7bfd66310e051a80bb49ba04c',
      'variable' => '7e85b669dc62fde7a8c58161fe1027b9',
      'uuid_term' => 'cdffbcb5944671e6f6c83c3e90ac89d2',
    ),
    'pro_101_blog_feature' => array(
      'dependencies' => 'dc7ed505e22c455f6b0d4d23008103e2',
      'field' => '2e73b5ec6873eda14a5713047699f73a',
      'taxonomy' => '97332887653d7e72b1b776161f786c6d',
      'user_permission' => 'cd710adda2c88ea176e16483ea4367c6',
      'variable' => '0769e75e3cbca203dd626db95b3e34bb',
      'uuid_term' => '3e2b3909a6d157d776cf2c1079fbf11e',
      'context' => 'b2f221551ca2b73322e688008c33c1b7',
      'node' => '6dba0cc1c5af2a57bc90b9c7db03f925',
      'ds_field_settings' => '02959fc4cfa05f35010b762c44beff02',
      'ds_layout_settings' => '4de1b5c875e465a9641c0f04c5b53401',
      'ds_fields' => '97819edf69792a09d500d15e5c0af838',
      'rel_builds' => '3e9c8f83c5663722c955404a0d374b6d',
      'views_view' => '5425fa3d9819b1fad6c94882e989b197',
    ),
    'pro_101_contact_feature' => array(
      'dependencies' => 'fca25e384382b84feffc41fb69360938',
      'field' => 'b2d931295447a5dce631654760f54bde',
      'user_permission' => '7820caa0e93fce51ee0507b461342e99',
      'variable' => 'b636146856886a53df30c110bfc06bd2',
      'node' => '4993f56036a9255899650871783537c0',
    ),
    'pro_101_home_feature' => array(
      'dependencies' => 'b99cc583534a298102323651da169967',
      'content_menu_links' => '3fbc474f52776e53893a28ea867507c5',
    ),
    'pro_101_page_feature' => array(
      'dependencies' => '210d99e823df4a16af932d2d507e1489',
      'field' => 'f3a10cb102c53b304f56ec1944827a8f',
      'user_permission' => 'ecc4eeb895fb373f76dbc997d2e9c19f',
      'variable' => '3d4e6163bb59cacd6664b5022f9d51a5',
      'node' => '0967447a3999c3dd3effe625128085d7',
    ),
    'pro_101_specialties_feature' => array(
      'dependencies' => '3fd57e84bbefce54aa0a51208e182b91',
      'field' => '1a5e8d73aae3d8e843b9808a03b2eed0',
      'user_permission' => 'edd7522155da3caad6441ba22bc2d927',
      'variable' => '02fcba4f8a9f563bf33e6293dd3314d9',
      'node' => '8f8affae0aa14b7b2a4d97e71100d5e5',
      'views_view' => '407d4dbaf5372f2aa55dd4ef4c5b7783',
    ),
    'pro_101_testimonials_feature' => array(
      'dependencies' => '5be28e167911d1f02c245043845c4dca',
      'user_permission' => '35c3795798cb01acd9034ef71288be8d',
      'field' => '59c26b6e0b742a8cf8dfbd46cb326e68',
      'variable' => '7376432f369d3108b900c155448bee52',
      'node' => '07da996d0db903ad2a6694bbffd6ee28',
      'ds_field_settings' => '988ed7533c732a4fb0c5332a3d196758',
      'ds_layout_settings' => '8f541cc12269f13557802964cbb97793',
      'views_view' => '9710c510fe801a95472c5bb10b653222',
    ),
    'pro_101_dev_tools' => array(
      'dependencies' => '137fc28a7cdc3a15630f8bd3e6b1f4bc',
      'user_permission' => '8d18ee426c7465e77b456ab9f0b866b6',
      'variable' => 'd2b00a1e8e0d8856df5fbb2ad5c008eb',
      'box' => '47d7b203419dc2b54c327ab4f7750719',
      'context' => 'f1ad8136b5db348edab6ddd81ac568db',
    ),
    'pro_101_contact_content' => array(
      'dependencies' => 'eb5efd4139a271a8606fd726aa37006b',
      'variable' => 'b8487aa4f86cf4d1cde7ab2c2ca3e472',
      'content' => '212ba393bc80ee6915466ab97cbf7e77',
      'context' => '270cbf500399c9e93b4bc7f6435ed53f',
      'ds_layout_settings' => '7ad1d38adc558d0608a90fcc4b542e2c',
    ),
    'pro_101_answers_content' => array(
      'dependencies' => '2642f380d066716b453ee0543b513e20',
      'content_menu_links' => 'b649379bc619e6493e4b73392f831443',
      'content' => 'fd0590fc945a5da9b0bdfe772660cf3c',
    ),
    'pro_101_blog_content' => array(
      'dependencies' => '6dde91b84b0f67e2186b84317c2ca343',
      'content_menu_links' => '5836868d04a3fd1194205ace2663293f',
      'content' => '2b2f784f7a52f132d1592a4205e7b5ce',
    ),
    'pro_101_default_theme' => array(
      'dependencies' => 'f03a961a51b71e563dcd8bc36350cdc2',
      'filter' => '88cfa6361e000874caa65515923bb060',
      'user_permission' => '512e9c9279b5f69c62903828e12c3ed2',
      'variable' => 'a8bca2a7744e41bcccb5d660347e2004',
    ),
    'pro_101_specialties_content' => array(
      'dependencies' => 'b99cc583534a298102323651da169967',
      'content_menu_links' => 'f070b5085da70c5f5bc915e6c3db44e3',
      'content' => '2c462d80e5bffb3ea8d1089068c4f33c',
    ),
    'pro_101_support_infrastructure' => array(
      'dependencies' => 'fbae10209964890000c6f75e50307995',
      'variable' => '3a8f37529a03564c10e116d02ce2dfe4',
      'user_permission' => '0156981559b35b9e7dbb47d4691b9365',
    ),
    'pro_101_about_content' => array(
      'content' => '7fb402cdd128172e81b996876aecb9e5',
    ),
    'pro_101_testimonials_content' => array(
      'content' => '29c5774fc43c7c68744ff5a07ce990ff',
    ),
    'pro_101_default_users' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'pro_101_global_content' => array(
      'dependencies' => '6c768d929c62a2c8e5f2948d0c0d736f',
      'menu_custom' => '1c2b00718ed476ad18590044d454433b',
      'box' => 'f75fa7949690b356e0fda1cb6098b055',
      'context' => 'ca0c0187170593e1799c4d30d304e0a8',
    ),
    'pro_101_ignore' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
      'variable' => '8272b6000beb296d2856caa8dac90e80',
    ),
    'pro_101_performance' => array(
      'variable' => 'e1b9aff96f9bbca0a4d779898bfa7c3c',
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/legalpro101c.platdev.info/private/files';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_public_path';
  $strongarm->value = 'sites/legalpro101c.platdev.info/files';
  $export['file_public_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = 'sites/legalpro101c.platdev.info/private/temp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'pro_101';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1337194023;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode';
  $strongarm->value = 1;
  $export['maintenance_mode'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode_message';
  $strongarm->value = 'legalpro101c.platdev.info is currently under maintenance. We should be back shortly. Thank you for your patience.';
  $export['maintenance_mode_message'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 506,
    1 => 501,
    2 => 254,
    3 => 253,
    4 => 251,
    5 => 250,
    6 => 245,
    7 => 127,
    8 => 125,
    9 => 124,
    10 => 123,
    11 => 122,
    12 => 121,
    13 => 117,
    14 => 63,
    15 => 62,
    16 => 61,
    17 => 60,
    18 => 59,
    19 => 58,
    20 => 45,
    21 => 44,
    22 => 31,
    23 => 30,
    24 => 29,
    25 => 27,
    26 => 24,
    27 => 23,
    28 => 22,
    29 => 21,
    30 => 15,
    31 => 14,
    32 => 13,
    33 => 11,
    34 => 10,
    35 => 7,
    36 => 6,
    37 => 5,
    38 => 4,
    39 => 3,
    40 => 2,
    41 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 0;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 0;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 0;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rel_build_form_registration';
  $strongarm->value = 0;
  $export['rel_build_form_registration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_publisherID';
  $strongarm->value = 'dr-adb8dbfb-7f74-edf4-94b2-32f3ce5093';
  $export['sharethis_publisherID'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'US';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'fontaine.cook@pearance.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'legalpro101c.platdev.info';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'prostarter';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'fontaine.cook@pearance.com',
  );
  $export['update_notify_emails'] = $strongarm;

  return $export;
}
