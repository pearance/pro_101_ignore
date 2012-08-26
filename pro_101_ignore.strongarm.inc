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
  $strongarm->name = 'additional_settings__active_tab_blog';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_faq';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_faq'] = $strongarm;

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
  $strongarm->value = 1345875542;
  $export['cache_flush_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_block';
  $strongarm->value = 1345874818;
  $export['cache_flush_cache_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_field';
  $strongarm->value = 1345875542;
  $export['cache_flush_cache_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_filter';
  $strongarm->value = 1345877402;
  $export['cache_flush_cache_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_form';
  $strongarm->value = 1345875542;
  $export['cache_flush_cache_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_image';
  $strongarm->value = 1345877402;
  $export['cache_flush_cache_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_menu';
  $strongarm->value = 1345875542;
  $export['cache_flush_cache_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_metatag';
  $strongarm->value = 1345875542;
  $export['cache_flush_cache_metatag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_page';
  $strongarm->value = 1345874818;
  $export['cache_flush_cache_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_path';
  $strongarm->value = 1345875542;
  $export['cache_flush_cache_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_rules';
  $strongarm->value = 1345875542;
  $export['cache_flush_cache_rules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_token';
  $strongarm->value = 1345875542;
  $export['cache_flush_cache_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views';
  $strongarm->value = 1345875542;
  $export['cache_flush_cache_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views_data';
  $strongarm->value = 1345875542;
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
  $strongarm->value = 'BD0qgkfd4Hf5BqW36X7cPrfmlXwIlh9-KTeGfvcQ6dI';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1345940524;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'm9c7tn';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1345875544;
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
  $strongarm->name = 'defaultcontent_run_08e9aa56cfb396124694cc910e55f807';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_08e9aa56cfb396124694cc910e55f807'] = $strongarm;

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
  $strongarm->value = 'oa-PHa8dEPe0AlD3OOkWDR8clxhMCZUxCRN9MJHlMJA';
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
      'variable' => 'fd28ae2d24b16f7875a2db8c26c2841b',
      'user_role' => 'a0a90752e327f8b93ed391d4253be2a7',
      'user_permission' => 'af039c18debc528a69e55b7337e9ff6e',
    ),
    'pro_101_core_infrastructure' => array(
      'dependencies' => '36a0ba91fe95af80ed1c06522fee8bce',
      'variable' => 'dbdfde0306cb9b5d1c7bf3db15880e04',
      'field' => '493be7d5ad8ba938cbaf498899643c59',
      'filter' => 'b4cfaae4ccd7552ff40d76d3d6bef628',
      'menu_custom' => '1c2b00718ed476ad18590044d454433b',
      'user_permission' => '369b1cdc86b915f6f817031e30907eb4',
      'node' => 'ddea5e63c6bf342b96d7761ee7ab0f59',
      'views_view' => 'ac84de86a7682db2eefaf9a39170e6b1',
    ),
    'pro_101_user_infrastructure' => array(
      'dependencies' => 'cbff4e7132be62083cb8cdffe2bdacaa',
      'variable' => 'eab85daa5b884d007845eef3a1cbd26b',
      'content_menu_links' => '60ae4afecffab08f9a9b092d31897f93',
      'field' => '2d6e86d5bc5b3adb843622e22dbf2c45',
      'user_permission' => '73a12d5898b7d49472bdf2f0bb7b0861',
      'context' => 'd04758c139abe53bf97d5dc11bcd9c15',
      'rules_config' => '79873d2d21b7ecfe389666e49c8c5b3e',
      'field_group' => '73d2a2e7a66d3f31f68b8148e8644ff4',
    ),
    'pro_101_authoring_infrastructure' => array(
      'workbench_moderation_transitions' => '190d812eaa6b51b9ee03ba38bb489a76',
      'dependencies' => '300fa68509d84b1a71f3c4d8d0ca47cc',
      'variable' => '180e374028f60b179b3d24ca9148c7db',
      'ckeditor_profile' => '5f81d16ff513f3442ca9aa19f6a66147',
      'filter' => '4a52af7f96f4572c4e2f41135b09b6f9',
      'user_permission' => '150e275ccdfe60ffae5524000358ea9f',
      'workbench_moderation_states' => 'cf28c9961881ef41247f161820a9ecd1',
      'rules_config' => '74f08596a645a2d59084200167a8abd3',
      'mollom_form' => '36ef4874727ba7e216db77bef728021c',
    ),
    'pro_101_media_infrastructure' => array(
      'dependencies' => '00a9c41f42af3e3d14d9fd91bf6f7da1',
      'variable' => '2cc5b43f78ad53b868c8fa8be44718fb',
      'user_permission' => '78f26889058a4b11ca116dfb5235efb2',
    ),
    'pro_101_form_infrastructure' => array(
      'dependencies' => '0404c254e5fea207b6fb45c482ef4782',
      'variable' => '50c785fcbd3ecf7989b0042c74c926be',
      'field' => '7a0a095e7710c2c52b87de85c94bfdc2',
      'user_permission' => '1ae429b4cadabb43b6ec9715dc781f0b',
      'node' => '4993f56036a9255899650871783537c0',
    ),
    'pro_101_seo_infrastructure' => array(
      'dependencies' => '03d374de6570de9def2d4953b83366f5',
      'variable' => 'b58948f61f4d6c92cf17e76ea189857c',
      'user_permission' => '23dd55c0cf8ed88e305a06ec6c03dc74',
    ),
    'pro_101_about_feature' => array(
      'dependencies' => 'f334ac27b969221f20f7aa53080cd124',
      'views_view' => '6e5e5f44707239e40300f0e81819cee6',
    ),
    'pro_101_answers_feature' => array(
      'dependencies' => '77d2050fc56bde80643d4d19242d6773',
      'variable' => '750381d335749bd3201472076d18afe8',
      'field' => '02361cb78a53a7f3cd9f342261b6bf53',
      'taxonomy' => 'faadd5283932ea7eac378eaec64de3d5',
      'user_permission' => '39c15cb53d5054237db2dea4c0887627',
    ),
    'pro_101_blog_feature' => array(
      'dependencies' => '8ac1d7b4c07f3dfdd1888f1cbdc112d2',
      'variable' => 'ed12dcf9ada8d1904311420907f14b60',
      'field' => '7621e250f9d74db0d6db81df4397862b',
      'taxonomy' => '6326167e4ab36b3a2db01fea16819bff',
      'user_permission' => '9f6f73c06a334773f70f44b71beebd29',
      'node' => '6dba0cc1c5af2a57bc90b9c7db03f925',
      'views_view' => '02cb4a1f8cf12be995ac55e3d8692a34',
    ),
    'pro_101_glossary_feature' => array(
      'dependencies' => 'c01eef38f84b8a42f25f6f3145ada3df',
      'variable' => '5c7b619a33d775c5bf345bac4f6820e4',
      'content_menu_links' => '8e930eaa623585916fcfef452a165fc4',
      'taxonomy' => '52a4d7406294df738191f3cd3177fd4f',
      'user_permission' => 'c2aacab541bb93e0de152b59e71fbb53',
    ),
    'pro_101_showcase_feature' => array(
      'dependencies' => '1f21c861cae82eef23c64aba696a3bb7',
      'variable' => '6c5abc971b2ffeafcf427279693d8f42',
      'field' => '27de337f9d069cfee0c584ff181c9792',
      'user_permission' => '2ffa741fc7064301de3a7921657dcb71',
      'image' => '4f3d0d4f400988cb2550169063b4de34',
      'node' => 'fa4276fd2233e533b5ec78c1ff5b7191',
      'views_view' => '1085e91fb614bf6abb012d438d86f595',
    ),
    'pro_101_page_feature' => array(
      'dependencies' => 'bdb006d8f978cbea47988f22f5f8f898',
      'variable' => 'f6583387000fe421344e35beb6337e92',
      'field' => '0a2173670de3347a2a4ef5dbe08e757d',
      'user_permission' => 'ecc4eeb895fb373f76dbc997d2e9c19f',
      'node' => '0967447a3999c3dd3effe625128085d7',
    ),
    'pro_101_specialties_feature' => array(
      'dependencies' => '3fd57e84bbefce54aa0a51208e182b91',
      'variable' => 'f818051b1348b90a6a4ab3aedadb1825',
      'field' => 'f013b6df62dea3281f2cad83ca4c5838',
      'user_permission' => '9f6c800683c30a4f66eab0c962d16d3f',
      'node' => '8f8affae0aa14b7b2a4d97e71100d5e5',
      'views_view' => '3f2d76329a92e45de918da54fe20b3fa',
    ),
    'pro_101_testimonials_feature' => array(
      'dependencies' => 'f19262389059e9ef31c2e13964fcd62c',
      'variable' => '26ae01815e91423147d129d02ae56abf',
      'field' => 'd2b9f887fe2c2490ca649d7fb9efebed',
      'user_permission' => '28e7d49b0a72ca209875093938bd5da5',
      'node' => '07da996d0db903ad2a6694bbffd6ee28',
      'views_view' => 'bb0008bfe2c248c0e8e6ae83a1a64ab5',
    ),
    'pro_101_default_theme' => array(
      'dependencies' => '1e9ff8aa506533a70c3facf999956e70',
      'variable' => '59770bfbdc0d2324b9a43d49b1b9cde2',
      'user_permission' => 'ace5ba01a8dbe6ab68ce66e55336de72',
      'delta' => '40aff3d9f62feb978cef1e252e3a84a9',
    ),
    'pro_101_contact_content' => array(
      'dependencies' => '2974a1275b2a7d5956e7a4f6b87c0fba',
      'variable' => '776dc551ebd8425fd6c25e3c67566a10',
      'content' => '6da8ad1abe27ef10a5f51661d940983d',
      'context' => 'feedac0a2e0a1453390cf52e1f38334d',
    ),
    'pro_101_home_content' => array(
      'dependencies' => 'a057afd03d4e4a767596f016f73ed6a9',
      'content' => 'dad8f9ea2a1f9a38a7897597c1cacba1',
      'content_menu_links' => '3fbc474f52776e53893a28ea867507c5',
      'context' => '9e13fad6cb28f09b5b6d469d72fb0ba1',
    ),
    'pro_101_about_content' => array(
      'dependencies' => '7ccc3a052b86399841931fa5998c15a9',
      'content' => '4fa142eb123a1f3b257b472668619c5b',
      'context' => '6a030e94125e17723ccc34cde868c8d8',
    ),
    'pro_101_social_content' => array(
      'dependencies' => '17380e9d29bca241888db4e921bffbc6',
      'variable' => '805e112f8de2557caaccab689f0ff976',
      'content' => '8091bd617174f5727879f692b866bf66',
      'user_permission' => '9fa0d0c595933c046e003aa87cac7a80',
    ),
    'pro_101_answers_content' => array(
      'dependencies' => '6878e6f01f4a02991bb68dd96f0ebfa5',
      'content' => 'c65125a37a47564f611ee0e25749cbbf',
      'content_menu_links' => 'b649379bc619e6493e4b73392f831443',
      'context' => '96f0477d389668a93b53b74f3fcc4749',
    ),
    'pro_101_blog_content' => array(
      'dependencies' => '444ffdade56df545174087d914e30003',
      'content' => '1fd208f8e0c9dc608d8868bf9696ee27',
      'context' => 'f45b20925a53c3d51124c5e172b9fd24',
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
      'content' => '12afa7f1886a3770f7c1f4838f93fb86',
    ),
    'pro_101_global_content' => array(
      'dependencies' => 'f7fb51b9f610b1c5cd8f10cfc86fdc82',
      'content' => 'fc7da43c20250293383828678339d20f',
      'context' => '49fc10839d32b0d39f84316fe0e4e0d3',
    ),
    'pro_101_support_mode' => array(
      'dependencies' => '8c13ecad58b68d5f4e64de393b37d291',
      'variable' => 'aac7d16f3df68a1930965c34803ccacc',
      'user_permission' => '957a72340e35b7656f398ca10cf03634',
      'context' => 'bd0c309c47ab7b01f9e27a1fc828e835',
    ),
    'pro_101_mock_user_accounts' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'pro_101_wrap' => array(
      'shortcut_set' => '3c06fcb175f720ab8c330616d29b728a',
      'dependencies' => '62afa7e2aa1ee5a5d80a8fd1f9d43ba2',
      'variable' => '6bec3b0688e4d28c2c68b92eb32984d4',
      'menu_links' => 'ffac5d5a5ccae901bba429194ded5d45',
      'user_permission' => 'e87dcacf8b5eff41c9ecf346e6d7c1dd',
    ),
    'pro_101_ignore' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
      'variable' => '894f75e8e27c55316e4b79cf6c8b0fb8',
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
  $strongarm->value = 1345787586;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode_message';
  $strongarm->value = 'pro101a.platdev.info is currently under maintenance. We should be back shortly. Thank you for your patience.';
  $export['maintenance_mode_message'] = $strongarm;

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
    0 => 507,
    1 => 506,
    2 => 501,
    3 => 254,
    4 => 253,
    5 => 252,
    6 => 250,
    7 => 245,
    8 => 127,
    9 => 126,
    10 => 125,
    11 => 124,
    12 => 123,
    13 => 122,
    14 => 121,
    15 => 117,
    16 => 63,
    17 => 62,
    18 => 61,
    19 => 60,
    20 => 59,
    21 => 58,
    22 => 45,
    23 => 44,
    24 => 42,
    25 => 31,
    26 => 30,
    27 => 29,
    28 => 27,
    29 => 24,
    30 => 23,
    31 => 22,
    32 => 21,
    33 => 15,
    34 => 14,
    35 => 13,
    36 => 12,
    37 => 11,
    38 => 10,
    39 => 7,
    40 => 6,
    41 => 5,
    42 => 3,
    43 => 2,
    44 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_20';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_20'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_21';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_21'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_22';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_22'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_6';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_6'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_7';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_7'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_empty_sets';
  $strongarm->value = array(
    'workbench_moderation_after_unpublishing_live_content' => 0,
    'node_update' => 1,
    'node_presave' => 2,
    'node_view' => 3,
    'node_delete' => 4,
    'init' => 5,
    'cron' => 6,
    'watchdog' => 7,
    'user_update' => 8,
    'user_presave' => 9,
    'user_view' => 10,
    'user_delete' => 11,
    'user_login' => 12,
    'user_logout' => 13,
    'taxonomy_term_insert' => 14,
    'taxonomy_term_update' => 15,
    'taxonomy_term_presave' => 16,
    'taxonomy_term_delete' => 17,
    'taxonomy_vocabulary_insert' => 18,
    'taxonomy_vocabulary_update' => 19,
    'taxonomy_vocabulary_presave' => 20,
    'taxonomy_vocabulary_delete' => 21,
  );
  $export['rules_empty_sets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_publisherID';
  $strongarm->value = 'dr-2c56588d-b109-36cc-54b8-6b4da39a5a06';
  $export['sharethis_publisherID'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'development@pearance.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'pro101b.platdev.info';
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
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1345940545;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'development@pearance.com',
  );
  $export['update_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_extensions_default';
  $strongarm->value = ' csv';
  $export['upload_extensions_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_block_hashes';
  $strongarm->value = array(
    '6a599607ca67a5ace7ef0de5f78c06ed' => 'Professionals-about_author_block',
    '9cf22433e0efbd8b206c8e4c2edb177c' => 'workbench_recent_content-block_1',
  );
  $export['views_block_hashes'] = $strongarm;

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
