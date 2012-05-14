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
  $strongarm->value = 1336984505;
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
  $strongarm->value = 1336984505;
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
  $strongarm->value = 1336982342;
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
  $strongarm->value = 'MrBgTxOFDj2i6xYkqIxSy43dDkxWH_5gTCarYoHDRCc';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1336982342;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'm407uh';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1336969394;
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
  $strongarm->name = 'drupal_css_cache_files';
  $strongarm->value = array(
    '0d005d0429d738ea9c2bba808a506f46c4706eaab9647d06e2fe255694bb0c9c' => 'public://css/css_9iW3fJMwdijDlTNGaOFKuc8sVNv5FZoKCJcTm_gP3pY.css',
    'b0fb6f8950f8315d276aaafc1b793d7e02b0840e263a74ac1a020ba592880b25' => 'public://css/css_kvaqtp5WyrrHbRp04EMjxDRU1slGUfavu9v2bsvcoDU.css',
    'a0082e9c7fb2f83a8cd87114b75704da736b8eb5a979af7b51e523c8a2bf704b' => 'public://css/css_cWAL-RB3ba_GgZgpT0IWyUXxiUojF2yPME8IpNjGzSI.css',
    '4f7510382728fba0621914e75e34c385d362f97a1267f8ce2886e62c2ef4ec6e' => 'public://css/css_quW47FRmfqvjanHOMKuGByzNkMTB8GEeRnQVveDnHK8.css',
    '0b16ff6f4cb183564bdd640b02b655cbc45c67db5ef8df93569b2a75a7d6b805' => 'public://css/css_ZECbf18Q47VOp239U5Fy4O1Cx3RXsh3y_RfooFJRyGo.css',
    'b3476877d75ad8be4de3214eada966deac52fcf802f803ce5583546190e9a325' => 'public://css/css_nKQJdbA3MG_EgmEEYvJKPRKNf-haa11msDRwdP3Hl_A.css',
    'e5276580478a13562ff84dfe411d946e57cb51f2bb68ec8308dc4c8a5cf2dee6' => 'public://css/css_9iW3fJMwdijDlTNGaOFKuc8sVNv5FZoKCJcTm_gP3pY.css',
    'ec23ffd88c6bb806782f563aac235a4a14ae465acbfe3cd39618c8e2bc5ea124' => 'public://css/css_kvaqtp5WyrrHbRp04EMjxDRU1slGUfavu9v2bsvcoDU.css',
    '02841a935f92af23d610a085148396d7feece5623ba439c30f45d90582935d00' => 'public://css/css_QypRtk8-qgF28tgsXRi8iphy3snQGqHtM6kDFnHB_34.css',
    '3364f95fff7fca390daae753ee80bb4b4ca18cc4cbacd920efe64345c9c98a28' => 'public://css/css_quW47FRmfqvjanHOMKuGByzNkMTB8GEeRnQVveDnHK8.css',
    '841f78c4fd52c83728712dc01753f002eb12ee78a5bdd6a0ae1ed0e8d8edd61f' => 'public://css/css_ZECbf18Q47VOp239U5Fy4O1Cx3RXsh3y_RfooFJRyGo.css',
    '5936f9bdebfeb4c258310ac8a89ec6eb4b36a68233dd161795cc76fc3474a0dc' => 'public://css/css_nKQJdbA3MG_EgmEEYvJKPRKNf-haa11msDRwdP3Hl_A.css',
    'dac5245a391da44c455f7b778cd3557170e39eab76a74a1786fca99c14a6b29f' => 'public://css/css_QypRtk8-qgF28tgsXRi8iphy3snQGqHtM6kDFnHB_34.css',
    '3694ea0383488cb04148f0879b713b003b73e7014caaf50193833714fd5f0176' => 'public://css/css_KLXbUEzITkYuWCpgH_F92yPh1Ga5-bbN2hS1_XtB6ww.css',
    'c89fa06578619e92f28c40acfd74924b32d35a51dbe2137bf4445ba58ec9769a' => 'public://css/css_XhYxZ_ng2jca1WM9SsQVmmB4dm5w45ACMiedHXH3m2Y.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    '097be673a1a2933b03c92d03e3ef6bd3f40377fa0efb67af8dfb51809e0009ab' => 'public://js/js_IRP2_U6MMuRvOS2doP3oARg34wSgQUzC3l4xgFFNh28.js',
    '4a37c94fdf62375ec12b5a3b8df2d27f22062056318896a4bb9d155071cca715' => 'public://js/js_qej_GljBRya6mSG00ZtuXTrIxivY3cPUh6GIYBqVanQ.js',
    'b9efccac46fdd96fe275fc247e129686116f1d7aa7838f862ad6ac1bb558234e' => 'public://js/js_lHeL0WbAjSr6rQ_CBXVEajk8jKcw7r5-EPFG7ahYSrg.js',
    'cff27087938311313a9bd0851511549fb6b133e5027367d7bca95b62aec9322f' => 'public://js/js_pVe2GXO53cdb0KngOQ9mRvCEvATymBOG6-bp7k0uFP4.js',
    'c162c900831d8a9b985080c996972e02d7c9b6a263680a4fe2eafdfb23d46021' => 'public://js/js_ByQqoFmos53DlLDLfNaeXBXbxiumZmAoP08wXIegdFk.js',
    '07352232173e9e6a27f3a12b795ebdd612e4494f0b2da24542e6a4d3c46f5353' => 'public://js/js_5Z6y8nnlt69tyePHdaQU0iaftIwd22-uwDKUXhNZ_zc.js',
    '0e07d3234a0923d981f89f35d5049cbd7084cad5d5021c47c85301692df6e915' => 'public://js/js_tB7sAk4uSTDZBrhyGttlZbVhPRZhYHDIpPc9K7-Hg5c.js',
    '00d1fcd78ff14d645b5bbfc6cd0ab0d71e35f016e4faf871131fecf3af480803' => 'public://js/js_qej_GljBRya6mSG00ZtuXTrIxivY3cPUh6GIYBqVanQ.js',
    '4a4f9e3e38f93b174ce0058180de912c2c97470a8500c86656f1b47c04f20ee1' => 'public://js/js_8ZcfGvC9m3SPgmdGF37z2LRUFiBA2yeUFKPo5Q0mONA.js',
    'cda66fc1a9a58ec9385e4b4a0766db80785be8aae4f6a98ef4af1a7d9f112210' => 'public://js/js_ezZP3bE2v33diwV_-PWzkwCX5tOcbnx4S2DoNnHkKEo.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'MgF9taO_hB429dLF0z3BAVN4wCp9q4WVL1ZCWbAJJ3U';
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
      'dependencies' => 'd8d49191b27e64eb13f5a4fc0449e65c',
      'user_permission' => '446c82001fd6252788280b4cdf3c20c2',
      'variable' => '137ee1001e7a593e629430f5c24d5d0b',
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
      'ds_layout_settings' => '4de1b5c875e465a9641c0f04c5b53401',
      'rel_builds' => '3e9c8f83c5663722c955404a0d374b6d',
      'views_view' => '5425fa3d9819b1fad6c94882e989b197',
      'ds_field_settings' => '02959fc4cfa05f35010b762c44beff02',
      'ds_fields' => '97819edf69792a09d500d15e5c0af838',
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
      'dependencies' => '3124a3f73bc68d9565f68b5e406d04d6',
      'user_permission' => '8d18ee426c7465e77b456ab9f0b866b6',
      'variable' => 'd2b00a1e8e0d8856df5fbb2ad5c008eb',
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
      'variable' => 'de55ebdb2c6b74fd7232033562658bf0',
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
  $strongarm->value = 1336969323;
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
    34 => 4,
    35 => 3,
    36 => 2,
    37 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rel_build_form_registration';
  $strongarm->value = 1;
  $export['rel_build_form_registration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_publisherID';
  $strongarm->value = 'dr-2b73423-1236-8a46-7a6e-a8b785fa61da';
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
