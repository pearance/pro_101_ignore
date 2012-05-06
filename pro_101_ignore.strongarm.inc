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
  $strongarm->name = 'cache_flush_cache';
  $strongarm->value = 0;
  $export['cache_flush_cache'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_block';
  $strongarm->value = 1336291967;
  $export['cache_flush_cache_block'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_field';
  $strongarm->value = 0;
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
  $strongarm->value = 0;
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
  $strongarm->value = 0;
  $export['cache_flush_cache_menu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_page';
  $strongarm->value = 1336291854;
  $export['cache_flush_cache_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_path';
  $strongarm->value = 0;
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
  $strongarm->value = 0;
  $export['cache_flush_cache_views'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views_data';
  $strongarm->value = 0;
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
  $strongarm->value = 'yckU7PPSYI8CNkGGurueYqBIHxiEg2Z645NZVzjWrnM';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1336289882;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'm3ldhb';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1336279743;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_hashes';
  $strongarm->value = array(
    0 => 'e77e67271cd3688488bd5f9755aad517',
    1 => '62af662e1cbe7927f09a6776daed5e9e',
    2 => '2f1132b273088c7cdfa59405fcc7ed25',
  );
  $export['defaultcontent_hashes'] = $strongarm;

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
  $strongarm->name = 'drupal_css_cache_files';
  $strongarm->value = array(
    '68a97deaab726ba8623741d29405d20e8f4a19fdf44c5460caa1ef353f862cf1' => 'public://css/css_GqCqCmGspWzZsDVTgkFoFb2eEt4xaByq4GFNcVi8QG4.css',
    '4756f0158ea6d0be6828cc9a152281bb70a506869ec0af9f35674e348242d6a7' => 'public://css/css_kvaqtp5WyrrHbRp04EMjxDRU1slGUfavu9v2bsvcoDU.css',
    'eb5ccbda9d747aceb8ccf1bb842ef3faadb82401391ef7922b2c4da1b364915e' => 'public://css/css_NZy3EJWI0Z_lKYkNyC3So1b-l1SGpmgZxxo_0zudnq0.css',
    '4f7510382728fba0621914e75e34c385d362f97a1267f8ce2886e62c2ef4ec6e' => 'public://css/css_quW47FRmfqvjanHOMKuGByzNkMTB8GEeRnQVveDnHK8.css',
    '4a13329b4c2c5281004fd570716b47912d2209c923736971aed1ead588c0b497' => 'public://css/css_NFV_h4OLeMlej2xKkUhTc5pgwX2qNopZ3EhcwyYq_OM.css',
    '6e2f26f029ab72b0e9a6a8cd2490479a12bd8b27e960a07e7b364026c58ceaee' => 'public://css/css_nKQJdbA3MG_EgmEEYvJKPRKNf-haa11msDRwdP3Hl_A.css',
    '74ead34992d8a598c10a0a6d29c6f874357e3b4af14f6e616203b7fe047ebb03' => 'public://css/css_NZy3EJWI0Z_lKYkNyC3So1b-l1SGpmgZxxo_0zudnq0.css',
    'fa9b87ba75ceba3755f8f0ad79a8b3f07343bcebbb4b98de1df37e113537bd79' => 'public://css/css_NZy3EJWI0Z_lKYkNyC3So1b-l1SGpmgZxxo_0zudnq0.css',
    '7ba14d1ab2d6be1ee5af9189c36449c70711f28541a23efee1bac9f782dc8807' => 'public://css/css_KLXbUEzITkYuWCpgH_F92yPh1Ga5-bbN2hS1_XtB6ww.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    '097be673a1a2933b03c92d03e3ef6bd3f40377fa0efb67af8dfb51809e0009ab' => 'public://js/js_IRP2_U6MMuRvOS2doP3oARg34wSgQUzC3l4xgFFNh28.js',
    'b042fc6d4662259044eb12059a2b20c1c4c464b29f2ad79326deabe75bb0ae77' => 'public://js/js_WqHYLnzveBQ3MYKvdTSCWQkCAa8XxF3IjGm1PiezXek.js',
    'b9efccac46fdd96fe275fc247e129686116f1d7aa7838f862ad6ac1bb558234e' => 'public://js/js_lHeL0WbAjSr6rQ_CBXVEajk8jKcw7r5-EPFG7ahYSrg.js',
    'eeea4c6910d4b993d61b5b335bcf3e58282f05c0d1cde5d04b37b39660eec3a9' => 'public://js/js_NsVomvnv2Mq6WzKhSSfRsvKu4vVUvYuYMld4u6sEhqY.js',
    'c162c900831d8a9b985080c996972e02d7c9b6a263680a4fe2eafdfb23d46021' => 'public://js/js_ByQqoFmos53DlLDLfNaeXBXbxiumZmAoP08wXIegdFk.js',
    '23e2808a06c1e2e47488053e382eff533bff97e2ca0c4110797314348e3c6024' => 'public://js/js_ldvemGctFRULo8FMY3G-6ELOnXgtIRol0pVYI4_Nci4.js',
    '14fc5caafa4b35313d3b14056a030dea85ede66f9d4394993b8a8bfca6a0a5b8' => 'public://js/js_hRn5RaXbJ_YuYZ5UJRX90yUyOODup1ahhttJ0LltpBo.js',
    '4a4f9e3e38f93b174ce0058180de912c2c97470a8500c86656f1b47c04f20ee1' => 'public://js/js_8ZcfGvC9m3SPgmdGF37z2LRUFiBA2yeUFKPo5Q0mONA.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'ApF8fJazM2tKqDTx__7srgNdD5hnMOZkBO9KSMZj1Zw';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'pro_101_authoring_infrastructure' => array(
      'dependencies' => '9440c60a248a22ba91ff72b08a8e832e',
      'user_permission' => 'c42d7ad683167c545b9e49cc5be75dd0',
      'filter' => '38c8be7c818a162a59e83815ae45d9a5',
    ),
    'pro_101_build_infrastructure' => array(
      'dependencies' => '75ca91d4aa86c28ea3e126265993c039',
      'user_role' => 'a0a90752e327f8b93ed391d4253be2a7',
      'user_permission' => '81dd82cd3575e7202871a99e7d72536d',
      'variable' => '1c597e25fbf01da39717ac4c1c85b335',
    ),
    'pro_101_core_infrastructure' => array(
      'dependencies' => '9a038ac37ec6a66555b7f2bd61dcb6fc',
      'user_permission' => 'a07066a6e63ad821882636b162ba7fe4',
      'variable' => 'c3b087e9ad8c48abca60874087b985db',
    ),
    'pro_101_media_infrastructure' => array(
      'dependencies' => '4abc1bea42224a9f5ec0b81eadc845a0',
      'user_permission' => 'a6e2deb1f63aedcb39af100cc6afd6c9',
      'variable' => 'e2425c552f1e47ddcd3eecc29f6c6f03',
    ),
    'pro_101_seo_infrastructure' => array(
      'dependencies' => '5c486c87f8bb57225f78fc8de1be0e6f',
      'user_permission' => '1847d1517707940a3e1d97539685de9a',
      'variable' => 'cc0c0d915841ce6e8ed2cb92689558f7',
    ),
    'pro_101_form_infrastructure' => array(
      'dependencies' => '833be32993d2ff5ed87b4c3529adf4fd',
      'field' => '001779b1859f5d71aa2adce3ac2d2dbf',
      'user_permission' => 'ad74464e4e1a3d7908cbee91d1fdb4c0',
      'variable' => '6c2235cc1c8d2530a03b1ad43b334ee5',
      'node' => 'b6c4f4e5480bf49d674d2230bdecd52c',
    ),
    'pro_101_theme_infrastructure' => array(
      'dependencies' => 'f03a961a51b71e563dcd8bc36350cdc2',
      'filter' => '88cfa6361e000874caa65515923bb060',
      'user_permission' => '512e9c9279b5f69c62903828e12c3ed2',
      'variable' => '6a94d0ed253eec5d982a6c0859a8479b',
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
      'content_menu_links' => 'b649379bc619e6493e4b73392f831443',
      'variable' => '7e85b669dc62fde7a8c58161fe1027b9',
      'uuid_term' => 'cdffbcb5944671e6f6c83c3e90ac89d2',
    ),
    'pro_101_blog_feature' => array(
      'dependencies' => 'df74fdb9a5f9eb4aa079500b0302cb15',
      'field' => 'cd7b2e2586050617ef788da658b0fdb2',
      'taxonomy' => '97332887653d7e72b1b776161f786c6d',
      'user_permission' => '53c002cb439cdff563ae2f2c98de5a02',
      'content_menu_links' => '5836868d04a3fd1194205ace2663293f',
      'variable' => '0f62a3559af8c269c04af61b6609a667',
      'uuid_term' => '3e2b3909a6d157d776cf2c1079fbf11e',
      'context' => '897d36452f4ff8e2fc8162b0fb47ca17',
      'node' => '6dba0cc1c5af2a57bc90b9c7db03f925',
      'views_view' => '6c2897b1919bc2a6d7ef304ec0768fcb',
    ),
    'pro_101_home_feature' => array(
      'dependencies' => 'b99cc583534a298102323651da169967',
      'content_menu_links' => '3fbc474f52776e53893a28ea867507c5',
    ),
    'pro_101_page_feature' => array(
      'dependencies' => 'ef68d9d1741532dfd08bdf754b4b5fe8',
      'field' => '84f36b636f502b9c64dd91b507d11940',
      'user_permission' => 'ecc4eeb895fb373f76dbc997d2e9c19f',
      'variable' => '3d4e6163bb59cacd6664b5022f9d51a5',
      'node' => '0967447a3999c3dd3effe625128085d7',
    ),
    'pro_101_specialty_feature' => array(
      'dependencies' => '3fd57e84bbefce54aa0a51208e182b91',
      'field' => 'e58eb6e0661f71de0f250444ed7679d8',
      'user_permission' => 'edd7522155da3caad6441ba22bc2d927',
      'variable' => '02fcba4f8a9f563bf33e6293dd3314d9',
      'node' => '8f8affae0aa14b7b2a4d97e71100d5e5',
      'views_view' => '407d4dbaf5372f2aa55dd4ef4c5b7783',
    ),
    'pro_101_contact_content' => array(
      'dependencies' => '163009d98605ecffe50186ad54530ba5',
      'content' => '802c1ca01379cf409bfd06dcafe343bb',
    ),
    'pro_101_blog_content' => array(
      'dependencies' => '560d5e2097cd821d19b01ad0893e3b83',
      'content' => 'd5249e748d48be8058066edc5688ea06',
    ),
    'pro_101_support_infrastructure' => array(
      'dependencies' => 'fbae10209964890000c6f75e50307995',
      'variable' => '3a8f37529a03564c10e116d02ce2dfe4',
      'user_permission' => '0156981559b35b9e7dbb47d4691b9365',
    ),
    'pro_101_about_content' => array(
      'content' => '618f0ba49c909360db98f8b6432e01be',
    ),
    'pro_101_answers_content' => array(
      'content' => 'fd0590fc945a5da9b0bdfe772660cf3c',
    ),
    'pro_101_specialty_content' => array(
      'content' => '2c462d80e5bffb3ea8d1089068c4f33c',
    ),
    'pro_101_default_users' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'pro_101_global_content' => array(
      'dependencies' => '6c768d929c62a2c8e5f2948d0c0d736f',
      'menu_custom' => '1c2b00718ed476ad18590044d454433b',
      'context' => 'ca0c0187170593e1799c4d30d304e0a8',
      'box' => 'f75fa7949690b356e0fda1cb6098b055',
    ),
    'pro_101_dev_tools' => array(
      'user_permission' => '8d18ee426c7465e77b456ab9f0b866b6',
      'dependencies' => '3124a3f73bc68d9565f68b5e406d04d6',
      'variable' => 'd2b00a1e8e0d8856df5fbb2ad5c008eb',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array(
    'email_registration' => 'email_registration',
    'overlay' => 'overlay',
    'shortcut' => 'shortcut',
    'toolbar' => 'toolbar',
  );
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
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
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
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1336190703;
  $export['install_time'] = $strongarm;

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
    0 => 501,
    1 => 251,
    2 => 250,
    3 => 245,
    4 => 125,
    5 => 124,
    6 => 123,
    7 => 122,
    8 => 121,
    9 => 117,
    10 => 63,
    11 => 62,
    12 => 61,
    13 => 60,
    14 => 59,
    15 => 58,
    16 => 45,
    17 => 44,
    18 => 31,
    19 => 30,
    20 => 29,
    21 => 27,
    22 => 24,
    23 => 23,
    24 => 22,
    25 => 21,
    26 => 15,
    27 => 14,
    28 => 13,
    29 => 11,
    30 => 10,
    31 => 7,
    32 => 6,
    33 => 5,
    34 => 3,
    35 => 2,
    36 => 1,
  );
  $export['menu_masks'] = $strongarm;

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
  $strongarm->value = 'pro_101_starter';
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
