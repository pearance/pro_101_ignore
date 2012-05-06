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
  $strongarm->value = 1336294714;
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
  $strongarm->value = 0;
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
  $strongarm->value = 1336294922;
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
  $strongarm->value = 1336294922;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'm3ldy2';
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
    '61eeff47173c5b2945c1287088a9f89b7d56a6e794567836e5c5d0327edd3703' => 'public://css/css_NZy3EJWI0Z_lKYkNyC3So1b-l1SGpmgZxxo_0zudnq0.css',
    '32169e0aaa760a3837994cf8d78a464c640c5bd1545ce86086fc7edb5bc551bc' => 'public://css/css_GqCqCmGspWzZsDVTgkFoFb2eEt4xaByq4GFNcVi8QG4.css',
    '44854408dd9e13b2e0ea19316d412382e3ed747a9bbb411df9cc2cdf19ca6417' => 'public://css/css_rSqP9aAgp3ZNTbiDkksaqO2b4ly86dOG_sAY2Ol9TVI.css',
    '497e73252e738f919759152844c130ab73c701b0024ff6a97427f50733d74807' => 'public://css/css_rg8mJ2sWhXaR-pBy95cwjaQSQ4x5lnmFV2s1wMOjFvY.css',
    '47e5e8a238e6f884180cdc5ca15bbb31bc40fa4a3afccd52a748f65f7514ae38' => 'public://css/css_mD2B0lsErLK71C_1EFxjWo6eWYMhOYLlFt9kgMYziWs.css',
    'c0046c95df54a98c0bf921ea3934750717498723e290c7c787f74cb031aa3f4b' => 'public://css/css_tuOeZPmNZh_eDnQTpfiPmHgcNYrVGW8o4vz6bdwGrDM.css',
    'bae168d8a624cf884b11294758e1ab978c41209cd7dded66283c066475aeb437' => 'public://css/css_PA0eMGzbk_EBPRVAi9pamTBdSTd2pisjyo0FUaBnKK8.css',
    'd98de86684e2b4994f8774c6ddf4c912b7e51e11ebbbeb973b4e94279f581930' => 'public://css/css_rg8mJ2sWhXaR-pBy95cwjaQSQ4x5lnmFV2s1wMOjFvY.css',
    '3ca72f636599631597a35ef7921a450fa3f90783f69e4c3f1c3aaef8ff48e4c0' => 'public://css/css_nt78JkOmHs50CIkvtng5A28tz2th0edJx8DdtO8O3GM.css',
    '16cf31377b41b4335fb06b7e54f91bdc1c40c7bd49bb2857a4bfca9a47d48c3a' => 'public://css/css_eABjlgHY3hOVFah2P0EC5mD36i-BY4VLMWAiqTW_eIQ.css',
    'e915144df1ef81725b310297b01a529a8e03cb058e0e71a37191775269c4127b' => 'public://css/css_eABjlgHY3hOVFah2P0EC5mD36i-BY4VLMWAiqTW_eIQ.css',
    '865b6a0783b093930ce59d52e1ffc838b6be3f02aa8b9376bfa2509924f3aff1' => 'public://css/css_f65R7GjoPJqDzMHFduQxjujBBanwTEUvdyNH2_LDdVw.css',
    '1ffd827f6c9410f59a3a54a079fba06f606f7db8c18048f3762955aa20c7fafd' => 'public://css/css_YLqmk-sB2Jo9bwEaIajRT3h8ABNNM08fIPkPSkURO0I.css',
    'fb86ea03a81c6cffd86a3017eb4c0d74039e8aff70c7cef24941b1514a470d48' => 'public://css/css_YLqmk-sB2Jo9bwEaIajRT3h8ABNNM08fIPkPSkURO0I.css',
    'b196736339e4b2cbe82c3dec6846a1c3eddd68fd918ec2b0d890de861aab9bbf' => 'public://css/css_AjkJOp0TCrHkhsfgG1V-9gUKPyVq9eCmHFCMH6MziVU.css',
    '58753a807a8883fefae249016767af23cc653b08beb33861e8f7d4e6e9324daf' => 'public://css/css_4M9SbzhY_9kdp76jmdDFI2zPHWQ_ozAjbstKiykwrqM.css',
    '394af28982884d9ce053c8474455a34226d4f88876e8021a5153102ed45b443b' => 'public://css/css_4M9SbzhY_9kdp76jmdDFI2zPHWQ_ozAjbstKiykwrqM.css',
    '1c619d577fdb5d1e964168b2cf5a104dce6e7d8823f4769446532ba97bf35260' => 'public://css/css_BhJzcZPJniSXlyNOGrnVx5mV-FFyIOiJeaEh8Md9i8g.css',
    'c68c78c26165fbd99e65b0969fdbf7c5f3b9c9d0ac61c6d6b0be901a2fae2665' => 'public://css/css_CKoWqiBj9gVXhPuDSnNphuEB0b0J2To76x0pX0EGqn4.css',
    '91176ffdac8f6bd44ffb9087490328f6e672ddb86f5e3062eacc2bd7b5ab77da' => 'public://css/css_LrUCa4yxl6HHxITWR09em3Ffd2uco6Yz4uAIoP2n7aM.css',
    '4ed80db8af3ea2315a7c2d6e79c06b7e2214d996b95adbd80613de702e851e8f' => 'public://css/css_botNHIYRQPys-RH2iA3U4LbV9bPNRS64tLAs8ec1ch8.css',
    '117536564c2721a72eadf92b3370dc5b93ef781b2a6aa6d1e4f900052f42ca05' => 'public://css/css_3FNB4oIXX1vq-6HQW7qdZoej5aLVKk-894PsZOXU-dQ.css',
    '8fb91001bfbebfeb933a3596371f833176039692c8c99d5fc638458a8cd2f3fc' => 'public://css/css_83AQjnoB06tQr1xyS45a3HH_PPItCLdQt1iwioAkJK0.css',
    '37718b8eb527097fa10269fbd135e7a977538ecd38d68b644c753d12670467f9' => 'public://css/css_JDs3OEzmb0xNsqvv9O2jMduGuwvi-lT6JXhg1lHy1vo.css',
    '2995ee6e6fc6d8d83e0389a5f25852677c747a2f59c8e80ad63de9af46603acb' => 'public://css/css_IgRlhtFJocuLlyq2rKjQQgB_YPDM609t3JimN9dqQHE.css',
    '5ec42c56641cec7c40c098d985ee4c5dbbcabc20b7c242a9afb60f5b1b62e003' => 'public://css/css_eABjlgHY3hOVFah2P0EC5mD36i-BY4VLMWAiqTW_eIQ.css',
    '6595c25d5a1a9d03a6311d8f6f7905f1a4fd7d86df848d0569ca3ec814fad398' => 'public://css/css_eABjlgHY3hOVFah2P0EC5mD36i-BY4VLMWAiqTW_eIQ.css',
    'b391576f4f5ae0d3163325b8615b556f813b2baf5deb4045f4c999457da9250f' => 'public://css/css_f65R7GjoPJqDzMHFduQxjujBBanwTEUvdyNH2_LDdVw.css',
    'd5be6b6e0fbbcc7a7fc457a78318e512cf7bd7c080d38e8fd1a4118d0e352cef' => 'public://css/css_YLqmk-sB2Jo9bwEaIajRT3h8ABNNM08fIPkPSkURO0I.css',
    'cf64fb944d235d4247c8599b9a2ae9a99ffcb2f4e6c912fe7e2fe9686744f37c' => 'public://css/css_YLqmk-sB2Jo9bwEaIajRT3h8ABNNM08fIPkPSkURO0I.css',
    'ed1ecd668f7dafb218a9986199fcecff4a9f612ef9c0a758968b75271306017b' => 'public://css/css_AjkJOp0TCrHkhsfgG1V-9gUKPyVq9eCmHFCMH6MziVU.css',
    '789aed4b32c041017a6274d08cb7fbc12cccbbdbb340dafd4a1672b8bd9a934d' => 'public://css/css_4M9SbzhY_9kdp76jmdDFI2zPHWQ_ozAjbstKiykwrqM.css',
    'f8597b06f39d91ed84572a4736badfe70df7dcd626bfca68b69ab5843ced6a08' => 'public://css/css_4M9SbzhY_9kdp76jmdDFI2zPHWQ_ozAjbstKiykwrqM.css',
    'c4765f43b71edad32b917e9e510bf2cf18de80edd5cbc09ff6c3e4c83a26b689' => 'public://css/css_BhJzcZPJniSXlyNOGrnVx5mV-FFyIOiJeaEh8Md9i8g.css',
    '803261d41414ec19d7909f77a34bd320358ff31032d7a4f9d1e895cf87bfbdcf' => 'public://css/css_xEjRdjc8klHVtY4Ks8VIM-0qdO2p3XfE5cvuyojQv7M.css',
    'dafbdaa5b97b47fbfa5530cb8eeb80207391c06e547948651cd16807d1879d87' => 'public://css/css_3FNB4oIXX1vq-6HQW7qdZoej5aLVKk-894PsZOXU-dQ.css',
    '52bbb921ab0218795373c0db0a256313c2e3ac1fe0155f6720f25ddf4973d374' => 'public://css/css_83AQjnoB06tQr1xyS45a3HH_PPItCLdQt1iwioAkJK0.css',
    '087e4204373b4ae39c47139f7a98f7dd737940947dccfd9d0b8691c2c822a69b' => 'public://css/css_JDs3OEzmb0xNsqvv9O2jMduGuwvi-lT6JXhg1lHy1vo.css',
    'db065fff513c53905aeb8b26d85aa1ca701399e80e289da80bcec3cad2717161' => 'public://css/css_IgRlhtFJocuLlyq2rKjQQgB_YPDM609t3JimN9dqQHE.css',
    '20d4d082be05ffa2313db6efdb608128a06d7db137b7f9c74fc3fcd5cc0c990e' => 'public://css/css_OInOyvpZQD5fdbUm20v11nLD-ZSbaFKaORxdpKcwH_k.css',
    '0d50b0f8d44ad62c062ffaf87ae43b62edf7111e9a2bbc5f7a569cfdad0ed22b' => 'public://css/css_ZAJrl_aIhQbSrTi1bPnQvj-p7IPPpmcDXRo7ikFKU6s.css',
    'b0fb6f8950f8315d276aaafc1b793d7e02b0840e263a74ac1a020ba592880b25' => 'public://css/css_kvaqtp5WyrrHbRp04EMjxDRU1slGUfavu9v2bsvcoDU.css',
    'f3413c625109f7701c158c132b5b1511b61f18ebd9d1f55f733a1d0365df26c0' => 'public://css/css_ypp1lL9zRG7vm8dbg_toxDgTppfKEaJVNqHSA09UzDA.css',
    '0f2e2974ca4b77aa3478afe70d0208a2e74c17943a5b0eb8c4eb62c432f94bd8' => 'public://css/css_h5iBSosAkOtyA2PCJVt7fQ93iL3EFVTz8c9_ygg61hI.css',
    '28586d19bfc52a48347ea88e733d130d6a3102beda79ba008ed00725361f44ff' => 'public://css/css_UCyY5hRBMS8z_r9PjIRiH8jkSbKzL1Yq93ljBjzD5Dc.css',
    '449bf37e9fc91f32d7a618557cfa3d7b364a843cab5aebbc867125ab0943069c' => 'public://css/css_BYgUzaq4LuhTj556vvnzLBoaHYO6f1svdFmwuiE1ETg.css',
    'f43fe9d51d97a61a9cbccb15ed36c887f5e849ddb62abf184da04a3e34f4b8cd' => 'public://css/css_LrUCa4yxl6HHxITWR09em3Ffd2uco6Yz4uAIoP2n7aM.css',
    'bb0c33bbc65874c41f22c643ba69266426f813f0bf06855dc2aa79d5a660fe05' => 'public://css/css_Vh6HO_jPngXXR5GyqkMtlzfN9eQd5S3d0SgJGrVJQCM.css',
    '2db0e39875871bce677ec1b7185f1ae5058a6711a3fa723f8b722be52d572478' => 'public://css/css_83AQjnoB06tQr1xyS45a3HH_PPItCLdQt1iwioAkJK0.css',
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
    '1619e97d0b0314a0e9f2e1f7248363f99fb5dea83ea5d5a2ea50b0c363d7ba5d' => 'public://js/js_YyJ2xkznRmXpyzyaGb-yZ4SZIQ5sBxLwW908uHiNsI4.js',
    '4e11477b825d51f0d2ba86ae9224e04963d2e2a9eb409e4eafa267cb2d5c3673' => 'public://js/js_IRP2_U6MMuRvOS2doP3oARg34wSgQUzC3l4xgFFNh28.js',
    'd5cd43059e12c10afcabd9382cd2a1fde0f5d493cc91a88ded104428984c9d49' => 'public://js/js_WqHYLnzveBQ3MYKvdTSCWQkCAa8XxF3IjGm1PiezXek.js',
    '087ec29872150807fec127804bd1cc6372c83ce8cb6b048b2045fcbd2a3002eb' => 'public://js/js_lHeL0WbAjSr6rQ_CBXVEajk8jKcw7r5-EPFG7ahYSrg.js',
    '72db9aa71ba5eb12e97fab920e8bcbdad882efe85a09a685acf69d87055e5e05' => 'public://js/js_WBMJUgGhpCxsguNo12fx3iUkC7JsjLniXSn9ETy4_W8.js',
    'd444e7ba9df20171a791584691d4b9e21eadb21fe72b674d5e048a9c74888103' => 'public://js/js_heHRSDq6aYBiOK1xe4eeNl8olcA4_VfK3c093_zN-H4.js',
    '2f07acc9d6928a081dda73d31dd6d09ccaf7c6d7cde364073f1e6e968d3ab6b3' => 'public://js/js_AiXRVxumeIIkygy7jVr7GQ0PXZYQfNgusREIqi2ShEU.js',
    'bfe4fc59deda4891caf4f33950de0c0275c7ae4801e138048617cec66c660a58' => 'public://js/js_A0heS6UYMnE3ztUVKagsqgj5DDI_8KFMva3lupte0J8.js',
    '3b796ba4e844f72fa32aad7e7aa627ab75f6abb72f31c0a296396cf7e7f4aeff' => 'public://js/js_yaheHBFP2S3n4D7dnXsMtoaqRzf4909ueyC3yhssWig.js',
    '6756c84ac1e86cdec086294d8f85cad5600a41b20ca7185ef9fe1adf025ac3eb' => 'public://js/js_74HqQL3Ldz-yYYDrXChpm3I58SzwgVwgsDzCTnUhdyI.js',
    '5bf4cb9ae6e5f62cdcfa27c1eb5b0b5c816899e5c7bb92327a10c9cd7e423e5d' => 'public://js/js_ldvemGctFRULo8FMY3G-6ELOnXgtIRol0pVYI4_Nci4.js',
    'b04de7aa3fd8a7f3b8ff81a90dfaaacc4c58170172598ffb5bef29dd037ad62b' => 'public://js/js_lcpltuP8iV618ikwQ6_pbkBvONRmZdeytANUX6VnjQ4.js',
    'f46d722ddaff783a5a1ce6147abfd690855e60c9c32adf18e3c54c9258f86751' => 'public://js/js_jWUbA6tPXAY61uWxKxPYVLJpK3EIGvYbUPXptYyXfhU.js',
    'ef5782fe68bbb733e9aca2cf72d847fb3340d49fb3e5d3b40be5ae595d95847b' => 'public://js/js_ldvemGctFRULo8FMY3G-6ELOnXgtIRol0pVYI4_Nci4.js',
    'c90c93cd8d37e920aea8b2404a7729fe2309c4f0bcb62ebbcdf8723c1b69878a' => 'public://js/js_lHeL0WbAjSr6rQ_CBXVEajk8jKcw7r5-EPFG7ahYSrg.js',
    'b5ecad3f650153400270fa7d6e5c315a3c92c0637461fe87a60e73577467be41' => 'public://js/js_bbd-l2zm6M6JdJTnf5EG0Z8SP_ujQT95LvENbLMlIpE.js',
    '3481e7d5bf3fb5e68608edb2e6f78e17120f951f9921457bd2694d9546bde2fc' => 'public://js/js_IRP2_U6MMuRvOS2doP3oARg34wSgQUzC3l4xgFFNh28.js',
    '356d4709abe4265f47755174a6fc30d9b1d55a72142b70b764aa7d16b0ba50f9' => 'public://js/js_4kG6JyfjKZQogsQ9gX7LQ3jYgjOOZb-dYb2KvjcgMNc.js',
    'a6dc51111ca7885d72f8d11a43d1621814443f0bd7d04dbc95f307d4f254d9e4' => 'public://js/js_lHeL0WbAjSr6rQ_CBXVEajk8jKcw7r5-EPFG7ahYSrg.js',
    '1262614a29f21b516b6fb6e082a555c4957d7bf90772283eeaefc1ddae6fc9c1' => 'public://js/js_AiXRVxumeIIkygy7jVr7GQ0PXZYQfNgusREIqi2ShEU.js',
    '23c6919777e61d31d32e9559994bba9d3edda504fcafbc41b98897787930c1c6' => 'public://js/js_HOImJ1cRpDzb-Rj9Kp0wNFCNa2hRy2iiPrFIBDiW45Q.js',
    'ea66d99483a8ab00bce0e1b28f9013ba7d871cb10d19716b433ec0496e8917ea' => 'public://js/js_IRP2_U6MMuRvOS2doP3oARg34wSgQUzC3l4xgFFNh28.js',
    '75d3e41b96c7f90c4e3d992cbaf8a4627271114d8c59d112d7f9d3aabb1fac06' => 'public://js/js_zdlKwF0zGxPKoQAfuqZmYmSxnS7A6tVBNvD-idKEKh8.js',
    '20208bcbe43fb3cdfa62cdd3e2ee1b7c8b40c52d580cbb1ae965d4fe5645b18e' => 'public://js/js_lHeL0WbAjSr6rQ_CBXVEajk8jKcw7r5-EPFG7ahYSrg.js',
    'd0d504588571abf716aeb9e3a020959474fba6ae32b5065e45bbe23e0a5f2129' => 'public://js/js_AiXRVxumeIIkygy7jVr7GQ0PXZYQfNgusREIqi2ShEU.js',
    '6fd4a138ab956d0b9a574a4ff3649e4876684fe5fa3c31b5f4ec40a076fbc2e4' => 'public://js/js_HOImJ1cRpDzb-Rj9Kp0wNFCNa2hRy2iiPrFIBDiW45Q.js',
    '663cd3c506fb8929118be13541b8563a0de348a930d1babea5d0cb2aabff6092' => 'public://js/js_jWUbA6tPXAY61uWxKxPYVLJpK3EIGvYbUPXptYyXfhU.js',
    'b862fe4740b11dab096b8c261751775b062f05cb5577596ca558b8f38d0a1b03' => 'public://js/js_c0wG3uWZQuhdNR6QjUWUtr_M-wfKNz0RCZ08hzrhuu8.js',
    '8ec580dada04508a52b55e532b1bbc58e464ffd76700db3facce0b97e704ac2c' => 'public://js/js_7606tyWvEi22ueSNEkButZKCvMmgOlYtXE06m4TsJXU.js',
    'f28c2a04c25c725df8b038a5f654ac7bcaaad50098e9816a682aa304e029d9f9' => 'public://js/js_mMkcidFjEF0tyKDxbsFAf2OcHxlNpi3oQ2VoKN_zus0.js',
    '80c6222e68c0133abee385b32b4d867958e335b683ac8616a8384f0e053e235c' => 'public://js/js_R9UbiVw2xuTUI0GZoaqMDOdX0lrZtgX-ono8RVOUEVc.js',
    '7384334610c43a4605f68fc9ec391b774e829c69903e1a0b33c3a82628f20b9d' => 'public://js/js_EvTj4Js_MZCtEnmUqi8QTePRZe-_-iAx9a-iPgX1nSk.js',
    '303194cbf2f9827bd19c4a5c5a9b28bf0f8787a9652d25ee04345215a6506e9c' => 'public://js/js_FgCv4qSCnJnitoTGO_bcWXaPQaZgjuM0cd674br3qoI.js',
    '25572ded4d35bda0ffec736836a92828bec0ccbf3b83087c07ca58a764658e9c' => 'public://js/js_Q1fQitZLOXFUFfgq9dbZs4LTTV6_QPIW-VCR8Ju7beU.js',
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
  $strongarm->name = 'featrues_tools_disable_features_page_js';
  $strongarm->value = 0;
  $export['featrues_tools_disable_features_page_js'] = $strongarm;

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
    'pro_101_ignore' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
      'variable' => 'aabb239b0a51bc02e4d5299330060868',
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
