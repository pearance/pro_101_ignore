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
  $strongarm->name = 'alchemy_apikey';
  $strongarm->value = '';
  $export['alchemy_apikey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache';
  $strongarm->value = 0;
  $export['cache_flush_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_block';
  $strongarm->value = 1341945849;
  $export['cache_flush_cache_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_field';
  $strongarm->value = 0;
  $export['cache_flush_cache_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_filter';
  $strongarm->value = 0;
  $export['cache_flush_cache_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_form';
  $strongarm->value = 0;
  $export['cache_flush_cache_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_image';
  $strongarm->value = 0;
  $export['cache_flush_cache_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_menu';
  $strongarm->value = 0;
  $export['cache_flush_cache_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_metatag';
  $strongarm->value = 0;
  $export['cache_flush_cache_metatag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_page';
  $strongarm->value = 1341945849;
  $export['cache_flush_cache_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_path';
  $strongarm->value = 0;
  $export['cache_flush_cache_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_token';
  $strongarm->value = 0;
  $export['cache_flush_cache_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views';
  $strongarm->value = 0;
  $export['cache_flush_cache_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views_data';
  $strongarm->value = 0;
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
  $strongarm->value = 'EB7XtjhQF8RWz2USUGqFsPK1DNv_CiU6YQT1t0iOy6E';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1341945181;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'm6yk8s';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1341919924;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_hashes';
  $strongarm->value = array(
    0 => 'e77e67271cd3688488bd5f9755aad517',
    1 => 'c9913f8dd14c8ae691a6e8af2041b724',
    2 => '2f1132b273088c7cdfa59405fcc7ed25',
    3 => '2420208fbbca067a92c14df236ed2a2d',
    4 => '214251c488b398afe676bce8681f68b5',
    5 => 'cbc27b914f14682e75b804ef7d618e84',
  );
  $export['defaultcontent_hashes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_214251c488b398afe676bce8681f68b5';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_214251c488b398afe676bce8681f68b5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_2420208fbbca067a92c14df236ed2a2d';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_2420208fbbca067a92c14df236ed2a2d'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_2f1132b273088c7cdfa59405fcc7ed25';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_2f1132b273088c7cdfa59405fcc7ed25'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_c9913f8dd14c8ae691a6e8af2041b724';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_c9913f8dd14c8ae691a6e8af2041b724'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_cbc27b914f14682e75b804ef7d618e84';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_cbc27b914f14682e75b804ef7d618e84'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_e77e67271cd3688488bd5f9755aad517';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_e77e67271cd3688488bd5f9755aad517'] = $strongarm;

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
  $strongarm->value = '0OrjoEC1gmVYn1_U1sdTR4vx7ofRRB-EVe9SaV-t_j4';
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
      'dependencies' => '05fb2411d15d4ce4443f5a5a1100aa01',
      'variable' => '0207e3b0d3af984220960ad3729bc24c',
      'user_role' => 'a0a90752e327f8b93ed391d4253be2a7',
      'user_permission' => '2de5fab570c1179e49b9d178328c0929',
    ),
    'pro_101_core_infrastructure' => array(
      'dependencies' => '85af4ee4530716a974c71523fa5fc2c1',
      'variable' => 'b0f0b0b6487a05b96b39ded07e80793e',
      'menu_custom' => '1c2b00718ed476ad18590044d454433b',
      'user_permission' => '79f7d0511cec0022356e0448bea6c0c8',
    ),
    'pro_101_user_infrastructure' => array(
      'dependencies' => '0965ad857bbdc9f07dce14c53c7c5c38',
      'variable' => '0e857fb601e5c94933a2c67e12195a7a',
      'content_menu_links' => '60ae4afecffab08f9a9b092d31897f93',
      'field' => 'd60ad87c5a2216f43083cbc6db37c158',
      'user_permission' => '439360f0c9d9bfa766758767b9cc8541',
    ),
    'pro_101_authoring_infrastructure' => array(
      'dependencies' => '729ecb6ac8f6dc9076d02720b8eb3fcd',
      'variable' => 'e0bfb9faeaf828e97cbc435b937fb48f',
      'ckeditor_profile' => 'fc3dbf512004fd757d30164664d9b75e',
      'filter' => '079d143e030a5ffe3832958c2e5db160',
      'user_permission' => '443fcbd01d4c83359327dd5a4de78762',
    ),
    'pro_101_media_infrastructure' => array(
      'dependencies' => '00a9c41f42af3e3d14d9fd91bf6f7da1',
      'variable' => '2cc5b43f78ad53b868c8fa8be44718fb',
      'user_permission' => 'a158f1be6b4213f8291d69bf732368ac',
    ),
    'pro_101_form_infrastructure' => array(
      'dependencies' => '0404c254e5fea207b6fb45c482ef4782',
      'variable' => '50c785fcbd3ecf7989b0042c74c926be',
      'field' => '49b2a6f3dfc462e591233c0e8fb29a8c',
      'user_permission' => '1ae429b4cadabb43b6ec9715dc781f0b',
      'node' => '4993f56036a9255899650871783537c0',
    ),
    'pro_101_seo_infrastructure' => array(
      'dependencies' => '03d374de6570de9def2d4953b83366f5',
      'variable' => '7d4a66a414b9bd4fb59a6918eaff50de',
      'user_permission' => 'af41a387c7c54113f6618c7fb134dafa',
    ),
    'pro_101_about_feature' => array(
      'dependencies' => 'f334ac27b969221f20f7aa53080cd124',
    ),
    'pro_101_answers_feature' => array(
      'dependencies' => '77d2050fc56bde80643d4d19242d6773',
      'variable' => '63b2c46e3510d24af5d8488715c60d59',
      'field' => 'be9420e2bd2365ce8f94aa036f8e2c54',
      'taxonomy' => 'faadd5283932ea7eac378eaec64de3d5',
      'user_permission' => '5835a1f7bfd66310e051a80bb49ba04c',
    ),
    'pro_101_blog_feature' => array(
      'dependencies' => '2bb606bd120b6ab20fb2b8d7885d7001',
      'variable' => '3a5c4c0015f1446f48bbdb2a6dc09978',
      'field' => '2373314cc89152c6d12b26d488438593',
      'taxonomy' => '6326167e4ab36b3a2db01fea16819bff',
      'user_permission' => 'ad99ccea54bac5c6d8cbfd114eacf0b2',
      'node' => '6dba0cc1c5af2a57bc90b9c7db03f925',
    ),
    'pro_101_glossary_feature' => array(
      'dependencies' => 'c01eef38f84b8a42f25f6f3145ada3df',
      'variable' => '5c7b619a33d775c5bf345bac4f6820e4',
      'content_menu_links' => '8e930eaa623585916fcfef452a165fc4',
      'taxonomy' => '52a4d7406294df738191f3cd3177fd4f',
      'user_permission' => 'c2aacab541bb93e0de152b59e71fbb53',
    ),
    'pro_101_showcase_feature' => array(
      'user_permission' => '5455a8318f5e642efcb1bf47d221a242',
      'dependencies' => '1f21c861cae82eef23c64aba696a3bb7',
      'variable' => '6c5abc971b2ffeafcf427279693d8f42',
      'field' => '859b2968b03333cb21b096b365dbc075',
      'image' => '4f3d0d4f400988cb2550169063b4de34',
      'node' => 'fa4276fd2233e533b5ec78c1ff5b7191',
      'views_view' => '021489394fa793a3f4615a55288bcdf5',
    ),
    'pro_101_page_feature' => array(
      'dependencies' => 'bdb006d8f978cbea47988f22f5f8f898',
      'variable' => 'f6583387000fe421344e35beb6337e92',
      'field' => 'b90cd224460edd4694195efe9c91c3ad',
      'user_permission' => 'ecc4eeb895fb373f76dbc997d2e9c19f',
      'node' => '0967447a3999c3dd3effe625128085d7',
    ),
    'pro_101_specialties_feature' => array(
      'dependencies' => '3fd57e84bbefce54aa0a51208e182b91',
      'variable' => 'f818051b1348b90a6a4ab3aedadb1825',
      'field' => 'e58eb6e0661f71de0f250444ed7679d8',
      'user_permission' => 'edd7522155da3caad6441ba22bc2d927',
    ),
    'pro_101_testimonials_feature' => array(
      'user_permission' => '35c3795798cb01acd9034ef71288be8d',
      'dependencies' => 'd572ffd9cca41325f4fe8fd73b9ebcc9',
      'variable' => '1bddc107377929e4678bcab70fd77a9c',
      'field' => '8379d53318013d4d34df60784446a0ee',
      'node' => '07da996d0db903ad2a6694bbffd6ee28',
      'views_view' => 'a11f9c619269882abd307a2d815948fe',
    ),
    'pro_101_support_tools' => array(
      'dependencies' => 'd71aea7ec410a18f7cb854ee32e82fba',
      'variable' => '91f8917a886791f78e15962ab77a51b9',
      'user_permission' => '3df8a0b40c7337cf426a2cc65542ab89',
      'context' => 'd8ba38748c21860803e2f3b3eaaa7508',
    ),
    'pro_101_default_theme' => array(
      'dependencies' => '1e9ff8aa506533a70c3facf999956e70',
      'variable' => '48ea269b50c53751e4e3d56ca447176e',
      'user_permission' => 'ace5ba01a8dbe6ab68ce66e55336de72',
      'delta' => '40aff3d9f62feb978cef1e252e3a84a9',
    ),
    'pro_101_global_content' => array(
      'dependencies' => 'b12cad7b99fff04cb53a32769bf24d1b',
      'content' => '2da420b062b42f4069158a4364138b85',
      'box' => 'f75fa7949690b356e0fda1cb6098b055',
      'context' => 'd55fccd3bcc91a02531598545cb2372c',
    ),
    'pro_101_contact_content' => array(
      'dependencies' => '2974a1275b2a7d5956e7a4f6b87c0fba',
      'variable' => '776dc551ebd8425fd6c25e3c67566a10',
      'content' => '15c4985b6777a171345f79c1d02d71b2',
    ),
    'pro_101_social_content' => array(
      'dependencies' => 'e92da5820ddf272599a14a5c07a05944',
      'variable' => 'b8ce570f6658e89aa34824716f09b731',
      'user_permission' => '9fa0d0c595933c046e003aa87cac7a80',
      'box' => '5ff10cdde385fcc52f26a08ce3c7e071',
    ),
    'pro_101_home_content' => array(
      'dependencies' => '123336ffe65f4b6342009874529fb451',
      'content' => 'dad8f9ea2a1f9a38a7897597c1cacba1',
      'content_menu_links' => '3fbc474f52776e53893a28ea867507c5',
      'context' => '9e13fad6cb28f09b5b6d469d72fb0ba1',
    ),
    'pro_101_about_content' => array(
      'dependencies' => '7ccc3a052b86399841931fa5998c15a9',
      'content' => '4fa142eb123a1f3b257b472668619c5b',
    ),
    'pro_101_answers_content' => array(
      'dependencies' => '085cf0da283beb320ff77081b2de6b15',
      'content' => 'c65125a37a47564f611ee0e25749cbbf',
      'content_menu_links' => 'b649379bc619e6493e4b73392f831443',
      'context' => '41258ab82772aef3a9091675cca22b7c',
    ),
    'pro_101_blog_content' => array(
      'dependencies' => '69d092c8510293b1236eb4cc44e4e26e',
      'content' => '0325fd2915b766b8696205851cf88648',
      'context' => '2b7844d9f36c6a106314ee14447445aa',
    ),
    'pro_101_specialties_content' => array(
      'dependencies' => 'b99cc583534a298102323651da169967',
      'content' => '8c3713cd203e7a2d0d5f56b4541617ea',
      'content_menu_links' => 'f070b5085da70c5f5bc915e6c3db44e3',
    ),
    'pro_101_privacy_policy_content' => array(
      'dependencies' => '28e525f46ffefa515aa360285b43c154',
      'content' => '71ba996531faa0070d12f21ff83d5aed',
      'content_menu_links' => '523afcac3c5365236cc9f662bbc9de8b',
    ),
    'pro_101_testimonials_content' => array(
      'dependencies' => '0e7a378b661c0962667dd6c9af1611d3',
      'content' => '22633ac870d807c01b25395fc42cfd0d',
    ),
    'pro_101_support_accounts' => array(
      'user_permission' => '0156981559b35b9e7dbb47d4691b9365',
      'dependencies' => 'fbae10209964890000c6f75e50307995',
      'variable' => '3a8f37529a03564c10e116d02ce2dfe4',
    ),
    'pro_101_mock_user_accounts' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'pro_101_wrap' => array(
      'shortcut_set' => '3c06fcb175f720ab8c330616d29b728a',
      'user_permission' => '5940e0914a82f4eda06fb87759e66387',
      'dependencies' => '1482c37bfa0a2c9eb963494fc798a2a2',
      'variable' => '38564f6a939ead14bfcaf61b43055735',
      'menu_links' => 'd0bc718123ae44b9c1bfb71e6ca24c5e',
    ),
    'pro_101_ignore' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
      'variable' => '9e8b0d18ce1e5367da867938a9b334f8',
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
  $strongarm->name = 'features_tools_disable_features_page_js';
  $strongarm->value = 0;
  $export['features_tools_disable_features_page_js'] = $strongarm;

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
  $strongarm->value = 1341832262;
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
    'faq-page' => TRUE,
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_publisherID';
  $strongarm->value = 'dr-cdb6d6f3-910d-8185-8157-beb049cd4593';
  $export['sharethis_publisherID'] = $strongarm;

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
  $strongarm->value = 'pro101a.platdev.info';
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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordstream_password';
  $strongarm->value = '';
  $export['wordstream_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordstream_username';
  $strongarm->value = '';
  $export['wordstream_username'] = $strongarm;

  return $export;
}
