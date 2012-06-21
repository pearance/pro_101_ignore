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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'rubik';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache';
  $strongarm->value = 1340277062;
  $export['cache_flush_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_block';
  $strongarm->value = 1340276939;
  $export['cache_flush_cache_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_field';
  $strongarm->value = 1340277062;
  $export['cache_flush_cache_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_filter';
  $strongarm->value = 1340277062;
  $export['cache_flush_cache_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_form';
  $strongarm->value = 1340277062;
  $export['cache_flush_cache_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_image';
  $strongarm->value = 1340277062;
  $export['cache_flush_cache_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_menu';
  $strongarm->value = 1340277062;
  $export['cache_flush_cache_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_page';
  $strongarm->value = 1340276939;
  $export['cache_flush_cache_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_path';
  $strongarm->value = 1340277062;
  $export['cache_flush_cache_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_token';
  $strongarm->value = 1340277062;
  $export['cache_flush_cache_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views';
  $strongarm->value = 1340277062;
  $export['cache_flush_cache_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views_data';
  $strongarm->value = 1340277062;
  $export['cache_flush_cache_views_data'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = '0CfggUDz1GAJTX2T-JeDv7N9f_58vtBR093rubL_5bo';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1340277062;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'm5ysaz';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1340266943;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_hashes';
  $strongarm->value = array(
    0 => 'cbc27b914f14682e75b804ef7d618e84',
  );
  $export['defaultcontent_hashes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_cbc27b914f14682e75b804ef7d618e84';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_cbc27b914f14682e75b804ef7d618e84'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'Xk5X1EOxCIPDfamXxbVggk5lLayy9iisgw_wCW7A0IE';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'featrues_tools_disable_features_page_js';
  $strongarm->value = 0;
  $export['featrues_tools_disable_features_page_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'pro_101_build_infrastructure' => array(
      'dependencies' => 'a1253ba62085d9fd78db8d7613e9e32f',
      'variable' => '1c22c6e0dcc6de0798da4663180453df',
      'user_role' => 'a0a90752e327f8b93ed391d4253be2a7',
      'user_permission' => '434e833e38bb7a7bc37c7485673a7c8c',
    ),
    'pro_101_core_infrastructure' => array(
      'dependencies' => '58781bddbb7f7366410ffa3870d6a240',
      'variable' => '69f2d8dd7752a782c4c034fa6557db3c',
      'user_permission' => '79f7d0511cec0022356e0448bea6c0c8',
    ),
    'pro_101_user_infrastructure' => array(
      'dependencies' => '0965ad857bbdc9f07dce14c53c7c5c38',
      'variable' => 'ffd821fbff777e01160cfe20c0f6d667',
      'content_menu_links' => '60ae4afecffab08f9a9b092d31897f93',
      'field' => 'd60ad87c5a2216f43083cbc6db37c158',
      'user_permission' => '439360f0c9d9bfa766758767b9cc8541',
    ),
    'pro_101_authoring_infrastructure' => array(
      'dependencies' => 'b34d136a6e7d77c4eba31bdf69bd1587',
      'variable' => '2c0f821ebbfec5e47e9b1710d9826a76',
      'ckeditor_profile' => 'fc3dbf512004fd757d30164664d9b75e',
      'filter' => '67a436692196074e4f342ab4e98dfd5b',
      'user_permission' => 'f3814607a2e9e6f56da007cb8fa81f37',
      'mollom_form' => '36ef4874727ba7e216db77bef728021c',
    ),
    'pro_101_media_infrastructure' => array(
      'dependencies' => '00a9c41f42af3e3d14d9fd91bf6f7da1',
      'variable' => '2cc5b43f78ad53b868c8fa8be44718fb',
      'user_permission' => 'a158f1be6b4213f8291d69bf732368ac',
    ),
    'pro_101_form_infrastructure' => array(
      'dependencies' => '4ec69699b755fa667d270ea14aa024ed',
      'variable' => 'd191069c2f4933278dee5af8a326763e',
      'field' => 'daa4b171750d8d7ebd9331c1dff85f80',
      'user_permission' => 'd9380c28669d28409713cbab76ef792a',
      'node' => '4993f56036a9255899650871783537c0',
    ),
    'pro_101_seo_infrastructure' => array(
      'dependencies' => '985926a363436597921844e62d69f37f',
      'variable' => '214af5ba47f5431a783a1473753ce546',
      'user_permission' => '1847d1517707940a3e1d97539685de9a',
    ),
    'pro_101_support_tools' => array(
      'dependencies' => 'c882aff520aba4bec98364592c0aca91',
      'variable' => 'bab3bb693259926a0e743c7b278c16e9',
      'user_permission' => '3df8a0b40c7337cf426a2cc65542ab89',
      'context' => 'd8ba38748c21860803e2f3b3eaaa7508',
    ),
    'pro_101_support_accounts' => array(
      'dependencies' => 'fbae10209964890000c6f75e50307995',
      'variable' => '3a8f37529a03564c10e116d02ce2dfe4',
      'user_permission' => '0156981559b35b9e7dbb47d4691b9365',
    ),
    'pro_101_mock_user_accounts' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'pro_101_about_feature' => array(
      'dependencies' => 'f334ac27b969221f20f7aa53080cd124',
      'views_view' => 'ca0df7f9bf28d1da4750efe4897f67e3',
    ),
    'pro_101_answers_feature' => array(
      'dependencies' => '52a44faf6289695693060957d0f172ea',
      'variable' => 'ae3a528f395052ca4897b29d095c7411',
      'field' => 'be9420e2bd2365ce8f94aa036f8e2c54',
      'taxonomy' => 'faadd5283932ea7eac378eaec64de3d5',
      'user_permission' => '5835a1f7bfd66310e051a80bb49ba04c',
    ),
    'pro_101_blog_feature' => array(
      'dependencies' => '814aaf104543a1d69d8076cacda4eb88',
      'variable' => 'e299b5549676a9e70763cdfda92e39f2',
      'field' => 'a91a8039693677241614203b81887ada',
      'taxonomy' => '6326167e4ab36b3a2db01fea16819bff',
      'user_permission' => 'ad99ccea54bac5c6d8cbfd114eacf0b2',
      'node' => '6dba0cc1c5af2a57bc90b9c7db03f925',
      'views_view' => '93d8ce01c5a36455823e15f4820a8dc3',
    ),
    'pro_101_page_feature' => array(
      'dependencies' => 'bdb006d8f978cbea47988f22f5f8f898',
      'variable' => '2c0c969fcdd3dcc293cd28854d05ff6b',
      'field' => 'b90cd224460edd4694195efe9c91c3ad',
      'user_permission' => 'ecc4eeb895fb373f76dbc997d2e9c19f',
      'node' => '0967447a3999c3dd3effe625128085d7',
    ),
    'pro_101_showcase_feature' => array(
      'user_permission' => '5455a8318f5e642efcb1bf47d221a242',
      'dependencies' => '1f21c861cae82eef23c64aba696a3bb7',
      'variable' => '2226b2f5f07255ea40909146d15b6fcb',
      'field' => '859b2968b03333cb21b096b365dbc075',
      'image' => '4f3d0d4f400988cb2550169063b4de34',
      'node' => 'fa4276fd2233e533b5ec78c1ff5b7191',
      'views_view' => '021489394fa793a3f4615a55288bcdf5',
    ),
    'pro_101_specialties_feature' => array(
      'dependencies' => '3fd57e84bbefce54aa0a51208e182b91',
      'variable' => 'f818051b1348b90a6a4ab3aedadb1825',
      'field' => 'e58eb6e0661f71de0f250444ed7679d8',
      'user_permission' => 'edd7522155da3caad6441ba22bc2d927',
      'node' => '8f8affae0aa14b7b2a4d97e71100d5e5',
      'views_view' => '407d4dbaf5372f2aa55dd4ef4c5b7783',
    ),
    'pro_101_testimonials_feature' => array(
      'user_permission' => '35c3795798cb01acd9034ef71288be8d',
      'dependencies' => 'd572ffd9cca41325f4fe8fd73b9ebcc9',
      'variable' => '1bddc107377929e4678bcab70fd77a9c',
      'field' => '8379d53318013d4d34df60784446a0ee',
      'node' => '07da996d0db903ad2a6694bbffd6ee28',
      'views_view' => 'a11f9c619269882abd307a2d815948fe',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'pro_101';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1340266864;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 506,
    1 => 501,
    2 => 254,
    3 => 253,
    4 => 250,
    5 => 245,
    6 => 127,
    7 => 126,
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
    33 => 12,
    34 => 11,
    35 => 10,
    36 => 7,
    37 => 6,
    38 => 5,
    39 => 3,
    40 => 2,
    41 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'fontaine.cook@pearance.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'legalpro101c.platdev.info';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'prostarter';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'fontaine.cook@pearance.com',
  );
  $export['update_notify_emails'] = $strongarm;

  return $export;
}
