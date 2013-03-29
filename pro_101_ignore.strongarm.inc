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
  $strongarm->name = 'additional_settings__active_tab';
  $strongarm->value = 'edit-context';
  $export['additional_settings__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_block';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_block'] = $strongarm;

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
  $strongarm->value = 'edit-rabbit-hole';
  $export['additional_settings__active_tab_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_featured';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_featured'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_page';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_slide';
  $strongarm->value = 'edit-save-draft';
  $export['additional_settings__active_tab_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_specialty';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_specialty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_testimonial';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_webform';
  $strongarm->value = 'edit-rabbit-hole';
  $export['additional_settings__active_tab_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_display';
  $strongarm->value = '0';
  $export['admin_menu_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_show_all';
  $strongarm->value = 0;
  $export['admin_menu_show_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'agrcache_css_cache_files';
  $strongarm->value = array(
    'files' => array(
      '22cd4fb945ab029cf3125bbcbe9b5e4c6335c7c26fe8f919bfafd12d0845b804' => 'public://css/css_0LutdxqKWsX5RGeREJaTrsodZ21EztSPhRSFf30-b9A.css',
      'b4997b98aa6bbdb9a06a4307af5dc664ccd2e359df01670784f498342feec1f6' => 'public://css/css_WwjZ6W1JYXeLA1JEN1d1Rw4k9hdOsNVNqxG3P9WwLYc.css',
      '23b5acb7e032842fb10979a848de461ee39e5e2f5fef2593132b239f5d733925' => 'public://css/css_WrpKnQPbXT0IWtfuj3tQ4oNPuPJwLVlk9KThmIkSKHk.css',
      '22d7e5261ba7f969869b13470e0751fe63cc7eaa29159d62b41d32a01618e2be' => 'public://css/css_T-tqQLoA09BSsl2yHtAAfudcDVVq4KqDvuXKvrNIOXE.css',
      '09b542d6612e6966fced8bafe5609b4ef6e86ebf55f9ac7d5d1321a992a9b1e7' => 'public://css/css_0LutdxqKWsX5RGeREJaTrsodZ21EztSPhRSFf30-b9A.css',
      '47ec60a6d1b674ea30ecb72433d8c08a5c65ad5360b4115eb82f1e7a0247590d' => 'public://css/css_WwjZ6W1JYXeLA1JEN1d1Rw4k9hdOsNVNqxG3P9WwLYc.css',
      '344ab66675864e5108ba7ed02ac9a0e4d03ea22a8d1e43ebbde481c8b8440f4c' => 'public://css/css_WrpKnQPbXT0IWtfuj3tQ4oNPuPJwLVlk9KThmIkSKHk.css',
      'df8fdac5a72e8b9e42454141c14667098d79d9a1fc31afcc88dec7782e0175db' => 'public://css/css_BJsyVOg8Jurd4ONHSVD_iUPbsNibI3QmbM45NEPh2lI.css',
      '4f7510382728fba0621914e75e34c385d362f97a1267f8ce2886e62c2ef4ec6e' => 'public://css/css_vaGsWlDzpHQsNc3db4WsM59KIcc52G0rSTIr4pRdaZQ.css',
      'f73bcf510844d72f6b9076d47335dc4fd92961239f7229cc94f67195d8a5c37d' => 'public://css/css_HNWVC9YEGUuKLlhpuhFwQl2oEe2bJaRS9iOuEXuVl8g.css',
      'c2c90ac2c123c4c7be969b295002bac6614b444c8eedbd7940119258e7174e30' => 'public://css/css_z9PVouzxKBBhvED8ScXiiEUcIXhgXgV988WOkXelt9o.css',
    ),
    'callbacks' => array(
      'public://css/css_0LutdxqKWsX5RGeREJaTrsodZ21EztSPhRSFf30-b9A.css' => array(
        0 => array(
          'group' => -100,
          'every_page' => TRUE,
          'type' => 'file',
          'weight' => 0.014,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'modules/system/system.messages.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_WwjZ6W1JYXeLA1JEN1d1Rw4k9hdOsNVNqxG3P9WwLYc.css' => array(
        0 => array(
          'group' => -100,
          'type' => 'file',
          'weight' => 0.01,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/overlay-child.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        1 => array(
          'data' => 'sites/all/modules/contrib/jquery_update/replace/ui/themes/base/minified/jquery.ui.core.min.css',
          'group' => -100,
          'type' => 'file',
          'weight' => 0.025,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        2 => array(
          'data' => 'sites/all/modules/contrib/jquery_update/replace/ui/themes/base/minified/jquery.ui.theme.min.css',
          'group' => -100,
          'type' => 'file',
          'weight' => 0.026,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        3 => array(
          'group' => -100,
          'type' => 'file',
          'weight' => 0.054,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'modules/contextual/contextual.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_WrpKnQPbXT0IWtfuj3tQ4oNPuPJwLVlk9KThmIkSKHk.css' => array(
        0 => array(
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'group' => 0,
          'weight' => 0.016,
          'preprocess' => TRUE,
          'data' => 'modules/field/theme/field.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        1 => array(
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'group' => 0,
          'weight' => 0.017,
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/google_analytics_reports/google_analytics_reports/google_analytics_reports.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        2 => array(
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'group' => 0,
          'weight' => 0.018,
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/google_cse/google_cse.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        3 => array(
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'group' => 0,
          'weight' => 0.019,
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/mollom/mollom.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        4 => array(
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'group' => 0,
          'weight' => 0.023,
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/views/css/views.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_T-tqQLoA09BSsl2yHtAAfudcDVVq4KqDvuXKvrNIOXE.css' => array(
        0 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.007,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/ckeditor/ckeditor.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        1 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.008,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/colorbox/styles/stockholmsyndrome/colorbox_stockholmsyndrome.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        2 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.009,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/ctools/css/ctools.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        3 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.01,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/lexicon/css/lexicon.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        4 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.025,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/views_slideshow/views_slideshow.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        5 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.028,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/context/plugins/context_reaction_block.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        6 => array(
          'group' => 0,
          'type' => 'file',
          'weight' => 0.03,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/shortcut.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        7 => array(
          'type' => 'theme',
          'group' => 0,
          'weight' => 0.031,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/views/css/views-admin.seven.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_BJsyVOg8Jurd4ONHSVD_iUPbsNibI3QmbM45NEPh2lI.css' => array(
        0 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.007,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/ckeditor/ckeditor.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        1 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.008,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/ctools/css/ctools.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        2 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.009,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/lexicon/css/lexicon.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        3 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.024,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/views_slideshow/views_slideshow.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        4 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.027,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/context/plugins/context_reaction_block.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        5 => array(
          'group' => 0,
          'type' => 'file',
          'weight' => 0.029,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/shortcut.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        6 => array(
          'type' => 'theme',
          'group' => 0,
          'weight' => 0.03,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/views/css/views-admin.seven.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_vaGsWlDzpHQsNc3db4WsM59KIcc52G0rSTIr4pRdaZQ.css' => array(
        0 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'weight' => 0,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/tao/reset.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        1 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'weight' => 0.001,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/tao/base.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_HNWVC9YEGUuKLlhpuhFwQl2oEe2bJaRS9iOuEXuVl8g.css' => array(
        0 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'screen',
          'type' => 'file',
          'weight' => 0.002,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/tao/drupal.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        1 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'screen',
          'type' => 'file',
          'weight' => 0.003,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/core.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        2 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'screen',
          'type' => 'file',
          'weight' => 0.004,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/icons.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        3 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'screen',
          'type' => 'file',
          'weight' => 0.005,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/style.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_z9PVouzxKBBhvED8ScXiiEUcIXhgXgV988WOkXelt9o.css' => array(
        0 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'print',
          'type' => 'file',
          'weight' => 0.006,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/print.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['agrcache_css_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'agrcache_js_cache_files';
  $strongarm->value = array(
    'files' => array(
      '8d321faf0786e996119740f4b8ae2cfedff1432c052c1daebc02c66d1d621cb0' => 'public://js/js_pIep5nduumpKJ71GsQ2iRhKyVGps9u6Jf0gzO6ACiJE.js',
      '794efc2465b2c1f1168dacf453f03ea4309b4b1deabea35c9c53b400f9bc2185' => 'public://js/js_twu1c89YYevEkZa-Zlwuy4kMlKQBkflFU73KlVuJXRA.js',
      '5279c65eecc5c3f34e9e65506154ee97372240aee8267b3cd869b7918ec75432' => 'public://js/js_Xpcs9CPLyDR4I_XlAt5gs1EukL6-lq3ANyopg8dtL4o.js',
      '3771a8473fbc3bf992a0752393d39fe23f09aa45ebcb411af34bb2ec32cc93d2' => 'public://js/js_XY6O-7tD5uIbu0RCXvcMu7OGR2wl5DvGUccUdYA9Z9Q.js',
      '2a8a523fa7430b76ef2677d43cd9c8a327cb4dcb377677257c82fad6b407950d' => 'public://js/js_4rPwjcsA1hzlHx2nz9_sLU0PwvjYpTcC3zy11uUsKH4.js',
      'b3e8d5f32f0862a3cbf72e667575b084ba26f4ffba6309bb14e665a11045d3d5' => 'public://js/js_pIep5nduumpKJ71GsQ2iRhKyVGps9u6Jf0gzO6ACiJE.js',
      '3254cd38cebaee6a2f9b11777b87d8555194e75edbcb140822d5f760b42fdad6' => 'public://js/js_twu1c89YYevEkZa-Zlwuy4kMlKQBkflFU73KlVuJXRA.js',
      '6d7bd6eecfc40a1299df7917f88f24f6dc3b9ae2772e6d6f08df0377ff24757e' => 'public://js/js_t5QXcYdeCnlCZiYj7BS1O_rvzHR7gLW0MJURnh5uWNs.js',
      'c162c900831d8a9b985080c996972e02d7c9b6a263680a4fe2eafdfb23d46021' => 'public://js/js_MD3UdFao9PwcMtLZGJX8QD3RUqjOjfZJnSlWp_vGFQc.js',
    ),
    'callbacks' => array(
      'public://js/js_pIep5nduumpKJ71GsQ2iRhKyVGps9u6Jf0gzO6ACiJE.js' => array(
        'modules/overlay/overlay-child.js' => array(
          'version' => '1.0',
          'group' => -100,
          'type' => 'file',
          'every_page' => FALSE,
          'weight' => 0.006,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'modules/overlay/overlay-child.js',
        ),
        'modules/contextual/contextual.js' => array(
          'version' => '1.0',
          'group' => -100,
          'type' => 'file',
          'every_page' => FALSE,
          'weight' => 0.037,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'modules/contextual/contextual.js',
        ),
        'misc/form.js' => array(
          'group' => -100,
          'weight' => 1.017,
          'version' => '7.15',
          'type' => 'file',
          'every_page' => FALSE,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/form.js',
        ),
        'misc/ajax.js' => array(
          'group' => -100,
          'weight' => 2.02,
          'version' => '7.15',
          'type' => 'file',
          'every_page' => FALSE,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/ajax.js',
        ),
      ),
      'public://js/js_twu1c89YYevEkZa-Zlwuy4kMlKQBkflFU73KlVuJXRA.js' => array(
        'sites/all/modules/contrib/colorbox_node/colorbox_node.js' => array(
          'every_page' => TRUE,
          'type' => 'file',
          'group' => 0,
          'weight' => 0.007,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/colorbox_node/colorbox_node.js',
        ),
        'sites/all/modules/contrib/contentanalysis/contentanalysis.js' => array(
          'every_page' => TRUE,
          'type' => 'file',
          'group' => 0,
          'weight' => 0.008,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/contentanalysis/contentanalysis.js',
        ),
        'sites/all/modules/contrib/contentoptimizer/contentoptimizer.js' => array(
          'every_page' => TRUE,
          'type' => 'file',
          'group' => 0,
          'weight' => 0.009,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/contentoptimizer/contentoptimizer.js',
        ),
        'sites/all/modules/contrib/google_analytics_reports/google_analytics_reports/google_analytics_reports.js' => array(
          'every_page' => TRUE,
          'type' => 'file',
          'group' => 0,
          'weight' => 0.01,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/google_analytics_reports/google_analytics_reports/google_analytics_reports.js',
        ),
        'sites/all/modules/contrib/google_cse/google_cse.js' => array(
          'every_page' => TRUE,
          'type' => 'file',
          'group' => 0,
          'weight' => 0.011,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/google_cse/google_cse.js',
        ),
      ),
      'public://js/js_Xpcs9CPLyDR4I_XlAt5gs1EukL6-lq3ANyopg8dtL4o.js' => array(
        'sites/all/libraries/colorbox/colorbox/jquery.colorbox-min.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.006,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/libraries/colorbox/colorbox/jquery.colorbox-min.js',
        ),
        'sites/all/modules/contrib/colorbox/js/colorbox.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.007,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/colorbox/js/colorbox.js',
        ),
        'sites/all/modules/contrib/colorbox/styles/stockholmsyndrome/colorbox_stockholmsyndrome.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.008,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/colorbox/styles/stockholmsyndrome/colorbox_stockholmsyndrome.js',
        ),
        'sites/all/modules/contrib/colorbox/js/colorbox_load.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.009,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/colorbox/js/colorbox_load.js',
        ),
        'sites/all/modules/contrib/colorbox/js/colorbox_inline.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.01,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/colorbox/js/colorbox_inline.js',
        ),
        'sites/all/modules/contrib/views_slideshow/js/views_slideshow.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.017,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/views_slideshow/js/views_slideshow.js',
        ),
        'misc/progress.js' => array(
          'group' => 0,
          'version' => '7.15',
          'type' => 'file',
          'every_page' => FALSE,
          'weight' => 0.018,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/progress.js',
        ),
      ),
      'public://js/js_XY6O-7tD5uIbu0RCXvcMu7OGR2wl5DvGUccUdYA9Z9Q.js' => array(
        'sites/all/modules/contrib/context/plugins/context_reaction_block.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.022,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/context/plugins/context_reaction_block.js',
        ),
        'misc/collapse.js' => array(
          'group' => 0,
          'version' => '7.15',
          'type' => 'file',
          'every_page' => FALSE,
          'weight' => 0.025,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/collapse.js',
        ),
      ),
      'public://js/js_4rPwjcsA1hzlHx2nz9_sLU0PwvjYpTcC3zy11uUsKH4.js' => array(
        'misc/jquery.once.js' => array(
          'group' => -100,
          'weight' => -18.996,
          'version' => '1.2',
          'every_page' => TRUE,
          'type' => 'file',
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/jquery.once.js',
        ),
        'misc/drupal.js' => array(
          'data' => 'misc/drupal.js',
          'type' => 'file',
          'scope' => 'header',
          'group' => -100,
          'every_page' => TRUE,
          'weight' => -1,
          'preprocess' => TRUE,
          'cache' => TRUE,
          'defer' => FALSE,
        ),
      ),
      'public://js/js_t5QXcYdeCnlCZiYj7BS1O_rvzHR7gLW0MJURnh5uWNs.js' => array(
        'sites/all/modules/contrib/views_slideshow/js/views_slideshow.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.012,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/views_slideshow/js/views_slideshow.js',
        ),
        'sites/all/modules/contrib/context/plugins/context_reaction_block.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.015,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/context/plugins/context_reaction_block.js',
        ),
        'misc/collapse.js' => array(
          'group' => 0,
          'version' => '7.15',
          'type' => 'file',
          'every_page' => FALSE,
          'weight' => 0.018,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/collapse.js',
        ),
        'misc/progress.js' => array(
          'group' => 0,
          'version' => '7.15',
          'type' => 'file',
          'every_page' => FALSE,
          'weight' => 0.019,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/progress.js',
        ),
      ),
      'public://js/js_MD3UdFao9PwcMtLZGJX8QD3RUqjOjfZJnSlWp_vGFQc.js' => array(
        'sites/all/themes/rubik/js/rubik.js' => array(
          'group' => 100,
          'every_page' => TRUE,
          'type' => 'file',
          'weight' => 0,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/themes/rubik/js/rubik.js',
        ),
      ),
    ),
  );
  $export['agrcache_js_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'alchemy_apikey';
  $strongarm->value = '';
  $export['alchemy_apikey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'array_filter';
  $strongarm->value = TRUE;
  $export['array_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_cache';
  $strongarm->value = 0;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_block';
  $strongarm->value = 1364547512;
  $export['cache_flush_cache_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_file';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_entity_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_node';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_entity_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_taxonomy_term';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_entity_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_taxonomy_vocabulary';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_entity_taxonomy_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_user';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_entity_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_field';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_filter';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_form';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_image';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_libraries';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_libraries'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_menu';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_metatag';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_metatag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_page';
  $strongarm->value = 1364547512;
  $export['cache_flush_cache_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_path';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_rules';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_rules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_token';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views';
  $strongarm->value = 1364547468;
  $export['cache_flush_cache_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views_data';
  $strongarm->value = 1364547468;
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
  $strongarm->value = 'fCgWI5_T9etXVZVp0it4nMw4PYHaFbO_FVrgYdwMXX4';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1364547468;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'mkf3eq';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1364547472;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_hashes';
  $strongarm->value = array(
    0 => 'e77e67271cd3688488bd5f9755aad517',
    1 => 'c9913f8dd14c8ae691a6e8af2041b724',
    2 => '2f1132b273088c7cdfa59405fcc7ed25',
    3 => '214251c488b398afe676bce8681f68b5',
    4 => 'e6634816792080267aba2336dc29d2da',
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
  $strongarm->name = 'defaultcontent_run_e6634816792080267aba2336dc29d2da';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_e6634816792080267aba2336dc29d2da'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_e77e67271cd3688488bd5f9755aad517';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_e77e67271cd3688488bd5f9755aad517'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_api_url';
  $strongarm->value = 'api.drupal.org';
  $export['devel_api_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_error_handlers';
  $strongarm->value = array(
    1 => '1',
  );
  $export['devel_error_handlers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_execution';
  $strongarm->value = '5';
  $export['devel_execution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_krumo_skin';
  $strongarm->value = 'default';
  $export['devel_krumo_skin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_page_alter';
  $strongarm->value = 0;
  $export['devel_page_alter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_query_display';
  $strongarm->value = 0;
  $export['devel_query_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_query_sort';
  $strongarm->value = '0';
  $export['devel_query_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_raw_names';
  $strongarm->value = 0;
  $export['devel_raw_names'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_rebuild_theme_registry';
  $strongarm->value = 0;
  $export['devel_rebuild_theme_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_redirect_page';
  $strongarm->value = 0;
  $export['devel_redirect_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_use_uncompressed_jquery';
  $strongarm->value = 0;
  $export['devel_use_uncompressed_jquery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_xhprof_directory';
  $strongarm->value = '';
  $export['devel_xhprof_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_xhprof_enabled';
  $strongarm->value = FALSE;
  $export['devel_xhprof_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_xhprof_url';
  $strongarm->value = '';
  $export['devel_xhprof_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dev_mem';
  $strongarm->value = 0;
  $export['dev_mem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dev_timer';
  $strongarm->value = 0;
  $export['dev_timer'] = $strongarm;

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
  $strongarm->value = 'glSOK0AMiUceII-tMxkc2p-lqjTIAi-7eVhNNB7uczs';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'email__active_tab';
  $strongarm->value = 'edit-email-admin-created';
  $export['email__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entitycache_enabled';
  $strongarm->value = TRUE;
  $export['entitycache_enabled'] = $strongarm;

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
      'dependencies' => 'ade115dad6ed0368c4271eeb0042b1cd',
      'variable' => '4dbab155af7fb7f090995ecca5886827',
      'user_role' => 'a0a90752e327f8b93ed391d4253be2a7',
      'user_permission' => 'e1de4cf2f5de327f380aad43b3d00e72',
    ),
    'pro_101_core_infrastructure' => array(
      'dependencies' => 'e106d3b0f1f76f3613adcd9401e3bc87',
      'variable' => 'bc4f83a3204c8901b5b03ea1fe28931a',
      'ccl' => 'a66205d8c0e75e0f7aa5224679560133',
      'field' => '6d8b7146b46f3aed256e3d8ab434b634',
      'menu_custom' => '1c2b00718ed476ad18590044d454433b',
      'user_permission' => '0245f076c9c2d83b495c098cb8c0d076',
      'node' => 'ddea5e63c6bf342b96d7761ee7ab0f59',
      'views_view' => 'ac84de86a7682db2eefaf9a39170e6b1',
    ),
    'pro_101_blog_feature' => array(
      'dependencies' => '9823a2e993666f6d02b2c1597552d48e',
      'variable' => '60d7a57c4ec140565ed54887352d68c4',
      'field' => 'c959ee876c1572d4bbe453f87bf26a2b',
      'taxonomy' => 'fbccbba8d9bd083407a4b08cb5ba1846',
      'user_permission' => '057aa91082593753fc1cac736c262d7e',
      'context' => '49fe0a3fae76529293ea46c25bcead2c',
      'node' => '6dba0cc1c5af2a57bc90b9c7db03f925',
      'views_view' => '3fc3958725ef3fc53f18ee53438ebb1c',
    ),
    'pro_101_user_infrastructure' => array(
      'dependencies' => '1480069f53519116cc2516abfea04566',
      'variable' => '301ce849bf329be714c57642527dc093',
      'content_menu_links' => 'bbbe277b4d100764996109fa8ae43140',
      'field' => '5a09ae5c3c74e23dfb743959b7914203',
      'user_permission' => '2025e191e7dd78329105ba8340b0b577',
      'context' => '590769792e36e661ad373b129c6c7761',
      'mollom_form' => '30cc9b830e42cd713f6cfd5ca674624b',
      'field_group' => 'e74739d008492ea4d7a8281049609ada',
    ),
    'pro_101_authoring_infrastructure' => array(
      'dependencies' => '37e0d1a3c85703ee27d13802b8e680c4',
      'variable' => '0ff37b5a6a78067a54391c1e7e6e2fcd',
      'ckeditor_profile' => '81e3801b8fe7e5787d11496f9ff8d50c',
      'filter' => '6bcffa76c9835c956de0096a5e6350a3',
      'user_permission' => '173f716e2f862729f37e90544f4f4c01',
      'workbench_moderation_states' => '1456e370bbde7639e39d497ec291d572',
      'workbench_moderation_transitions' => '433a6ee7cc881e1c399890dcb66acece',
      'rules_config' => 'db5aa3982947a6cdecd26b5c55e6cb29',
      'mollom_form' => '422bd4e1e38c72c93d89cc6841119f5c',
    ),
    'pro_101_media_infrastructure' => array(
      'dependencies' => '76d1a87999a92dbd6a439143ec75078a',
      'variable' => '4d2c8b5b70fd7ffc87e1eca2bb01416f',
      'user_permission' => '8a294e0c21869cdb56850a497ba43a5d',
      'file_display' => '342213a253a5e9768e73f63bc7ae0bc8',
      'image' => 'ad2b328a487e196d499b3a0642d62738',
    ),
    'pro_101_form_infrastructure' => array(
      'dependencies' => '023dddae66dd7e958e8ddadd36325774',
      'variable' => 'af2a426615fe284fbb6570ad5f8862f3',
      'field' => '2fbdb96706c7194ec17988bb13a60b94',
      'user_permission' => 'aefdbf10e1e378de7733a3fec9c6e590',
      'node' => '4993f56036a9255899650871783537c0',
    ),
    'pro_101_seo_infrastructure' => array(
      'dependencies' => '994c9ce5092723bc8855a54318eb4f1d',
      'variable' => 'ce471de10277fd2ea4926ef612aa6542',
      'user_permission' => '99d37938ddbb7172f9e5d90ddfa4c981',
    ),
    'pro_101_about_feature' => array(
      'dependencies' => 'f334ac27b969221f20f7aa53080cd124',
      'views_view' => 'ead514e2fcc50ede47d3b778558e6f60',
    ),
    'pro_101_answers_feature' => array(
      'dependencies' => '31bd83e3dbeb5297608ca34a1113e55c',
      'variable' => 'b7459a391da2325ccc7d5b0ee40f563c',
      'field' => '103e38bb61d43196f89b88bc3c292ffa',
      'taxonomy' => 'faadd5283932ea7eac378eaec64de3d5',
      'user_permission' => '508d681613df235bdda472aa6e281d28',
    ),
    'pro_101_glossary_feature' => array(
      'dependencies' => '4c64998214bd94dc0b4c22905d05dca5',
      'variable' => '39b0f661f800c61672a3e7caf02a711d',
      'content_menu_links' => '8e930eaa623585916fcfef452a165fc4',
      'taxonomy' => '52a4d7406294df738191f3cd3177fd4f',
      'user_permission' => 'f84008ce0aff58f17f8af3ea859fdd40',
    ),
    'pro_101_slideshow_feature' => array(
      'dependencies' => '5b4c8a2ccc441ebbf1383df7a0c683bd',
      'variable' => '4bcd4526121d72e4edaa7a9ba77bc092',
      'field' => '8487dcc8f0c29c45c39605b70f4d90a2',
      'user_permission' => 'f4173ec314b2a212f6bd98e982ec139d',
      'flexslider_optionset' => '05fb7260b0f524382a2e547b920ce28c',
      'image' => 'f44c8ba52ecd0693ee174d1321621d1d',
      'node' => '9826be6c460c36466846310a25737e4d',
      'views_view' => '1a921c268208a1a921fb1715b7160b12',
    ),
    'pro_101_page_feature' => array(
      'dependencies' => 'c93efc13265499311bbab96511c41a97',
      'variable' => '4660b0dbaf833c72d6b88a720a035fd8',
      'field' => '419342f389de0e5c37f22d3f91440fc3',
      'user_permission' => '420b02670d6dd3c15a497a85279716f8',
      'node' => '0967447a3999c3dd3effe625128085d7',
    ),
    'pro_101_specialties_feature' => array(
      'dependencies' => '06dc4e8cde8fbbed2c5fbab226c9da96',
      'variable' => 'a20ecdb09d368102b8564f0eabc27f7c',
      'field' => '7ed6b3a4c8d292a93962f414bbadf09e',
      'user_permission' => '5a7b673e3ed8df389e821501048fdd77',
      'context' => 'b0e5f069004e4e55b0a9739a7f695a25',
      'rules_config' => '48a27b6dc7be169536c12acbfb8f6c4a',
      'node' => '8f8affae0aa14b7b2a4d97e71100d5e5',
      'views_view' => 'fb9ce51f3df8901a07da0739a20b51af',
    ),
    'pro_101_testimonials_feature' => array(
      'dependencies' => '7de4ffa57b878bf1f51d4c21d7f9cf38',
      'variable' => 'bed32c14191cccc8042413929d3c9721',
      'field' => 'dd2e5c8461bc9c7cf93d86beab8de9e6',
      'user_permission' => 'a1d0bb6441c6b408af13c0a16d21ff30',
      'rules_config' => '831ffee6ada45a19dba8619e42634cf6',
      'node' => '5b2109f4ed7e9140e3567d2992cbacb5',
      'views_view' => '377723ab8d82a961ea276c5a4109e511',
    ),
    'pro_101_default_theme' => array(
      'dependencies' => '1e9ff8aa506533a70c3facf999956e70',
      'variable' => '576240c8beffcc903f3f13300f1d3e7f',
      'user_permission' => '1d4fcd77c6cd477a678aff1d6cc30e97',
      'delta' => '2166f1dc8105c5467d850410104f8d49',
    ),
    'pro_101_contact_content' => array(
      'dependencies' => 'edfc9ebdf807f11818b51bbf6a360ba6',
      'variable' => '83208a4c1a453221710814aece6b2d4b',
      'content' => '9e1310f736f87545650c108d58233357',
      'context' => 'ccbe34172a590616166a2d22d8e48568',
    ),
    'pro_101_home_content' => array(
      'dependencies' => 'a057afd03d4e4a767596f016f73ed6a9',
      'content' => '7901c51a96b151818bfc94bfeea1970e',
      'content_menu_links' => '3fbc474f52776e53893a28ea867507c5',
      'context' => '678e119a50bf004b5ce8d47f43e96ddc',
    ),
    'pro_101_about_content' => array(
      'dependencies' => 'a20f80f657804de39320b60ef7d23922',
      'content' => 'bf76cf883068ffab7a4f98b7df6840ed',
      'context' => '0f2ee6691e8ce034132a36c44bfc038e',
    ),
    'pro_101_social_content' => array(
      'dependencies' => '17380e9d29bca241888db4e921bffbc6',
      'variable' => 'a7ed5eed53f7883fee4734bbe3931bcb',
      'content' => '4480c7de926bd0f4f4194aff9f2c96c9',
      'user_permission' => 'abe0cac75aaff13d00b7e2d3ad50f36d',
    ),
    'pro_101_answers_content' => array(
      'dependencies' => 'b3ac2ba2dabff5449ea43d018e0d6ee6',
      'content' => '099518b7acb825c3cac5860a35275b37',
      'content_menu_links' => 'b649379bc619e6493e4b73392f831443',
      'context' => '9213313c18249a03c840d2ff4d27af09',
    ),
    'pro_101_blog_content' => array(
      'dependencies' => '5cd6c85716a78c03a9e7e5b050ae0bf8',
      'content' => '9ea86330c8cde3e375ad2179cb9be6c0',
      'context' => 'e5da78c1c9879f67036bd85551ae1e7c',
    ),
    'pro_101_specialties_content' => array(
      'dependencies' => 'b99cc583534a298102323651da169967',
      'content' => 'c81174005ff6604db5d7c3c9739fa3a3',
      'content_menu_links' => 'f070b5085da70c5f5bc915e6c3db44e3',
    ),
    'pro_101_privacy_policy_content' => array(
      'dependencies' => '28e525f46ffefa515aa360285b43c154',
      'content' => '803da67bf33d351804c533042ddcf4d5',
    ),
    'pro_101_testimonials_content' => array(
      'dependencies' => 'd4597f02fb84f4d581b1e9b1f9d71396',
      'content' => '67ff2100eb5758a4a6c785e222eb7896',
      'context' => 'e36344f12a33615ddd139690c6cbe415',
    ),
    'pro_101_global_content' => array(
      'dependencies' => '599ff96f0c8867e2dc74d84fd14cc209',
      'content' => '1af2c676ac305e5f94e3dcfaac0fec76',
      'context' => 'b7854991ee2f815b9dbc8b0f908415fc',
    ),
    'pro_101_support_mode' => array(
      'dependencies' => '3f6fa1e8b44170542b8fcb4bad030ff3',
      'variable' => 'a92b61bd9f088d108eb7558586730111',
      'user_permission' => '30cb619594f85ff490ba2d6941e96511',
      'context' => '2e18690cf539b459af5fdf47217b6421',
    ),
    'pro_101_development_mode' => array(
      'dependencies' => '013e604da1a86e39904a0a546640129f',
      'variable' => 'fbc965b3227a0955bd5bbda3676d6155',
      'user_permission' => '7d5ff68bb4ee2384caa93429df345d7c',
      'context' => '76bcdfb3eca713a2ff2c49fc987b5521',
    ),
    'pro_101_user_accounts' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'pro_101_wrap' => array(
      'shortcut_set' => '3c06fcb175f720ab8c330616d29b728a',
      'dependencies' => '5b9296bcee5e64537cb05ae55fadfd8a',
      'variable' => 'bd802bb0d1fc904fc059d7c42f7d26a6',
      'ccl' => '566c0f7871a98c5b34cc10a137daa0a5',
      'menu_links' => 'bce4e84ad1d5e9414654e6f3323ffb32',
      'user_permission' => '4b7d02cfd4fc46a2aa61684e764b18dc',
    ),
    'pro_101_ignore' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
      'variable' => '758b4471ebc58d91f68195234fa2a7db',
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
  $strongarm->name = 'ftools_disable_features_page_js';
  $strongarm->value = 0;
  $export['ftools_disable_features_page_js'] = $strongarm;

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
  $strongarm->value = 1364070184;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_disabled_strings_en';
  $strongarm->value = array(
    '' => array(
      'Your draft will be placed in moderation.' => 'When revision of this content is complete, change the editorial state to \'Ready for Optimization\'.',
    ),
  );
  $export['locale_custom_disabled_strings_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode';
  $strongarm->value = 0;
  $export['maintenance_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode_message';
  $strongarm->value = 'pro101a.platdev.info is currently under maintenance. We should be back shortly. Thank you for your patience.';
  $export['maintenance_mode_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'manualcrop_cache_control';
  $strongarm->value = TRUE;
  $export['manualcrop_cache_control'] = $strongarm;

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
    7 => 246,
    8 => 245,
    9 => 127,
    10 => 126,
    11 => 125,
    12 => 124,
    13 => 123,
    14 => 122,
    15 => 121,
    16 => 118,
    17 => 117,
    18 => 63,
    19 => 62,
    20 => 61,
    21 => 60,
    22 => 59,
    23 => 58,
    24 => 45,
    25 => 44,
    26 => 42,
    27 => 31,
    28 => 30,
    29 => 29,
    30 => 27,
    31 => 24,
    32 => 23,
    33 => 22,
    34 => 21,
    35 => 15,
    36 => 14,
    37 => 13,
    38 => 12,
    39 => 11,
    40 => 10,
    41 => 7,
    42 => 6,
    43 => 5,
    44 => 3,
    45 => 2,
    46 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_schema_installed';
  $strongarm->value = TRUE;
  $export['metatag_schema_installed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_1';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_11';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_11'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_15';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_15'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_2';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_2'] = $strongarm;

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
  $strongarm->name = 'nodeblock_block_23';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_23'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_27';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_27'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_28';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_28'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_29';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_29'] = $strongarm;

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
  $strongarm->name = 'nodeblock_block_8';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_8'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_9';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_9'] = $strongarm;

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
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 0;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 0;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_empty_sets';
  $strongarm->value = array(
    'workbench_moderation_after_unpublishing_live_content' => 0,
    'node_update' => 1,
    'node_view' => 2,
    'node_delete' => 3,
    'init' => 4,
    'cron' => 5,
    'watchdog' => 6,
    'user_update' => 7,
    'user_presave' => 8,
    'user_view' => 9,
    'user_delete' => 10,
    'user_login' => 11,
    'user_logout' => 12,
    'taxonomy_term_insert' => 13,
    'taxonomy_term_update' => 14,
    'taxonomy_term_presave' => 15,
    'taxonomy_term_delete' => 16,
    'taxonomy_vocabulary_insert' => 17,
    'taxonomy_vocabulary_update' => 18,
    'taxonomy_vocabulary_presave' => 19,
    'taxonomy_vocabulary_delete' => 20,
  );
  $export['rules_empty_sets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_publisherID';
  $strongarm->value = 'dr-c8c5bfb9-b293-cd7a-8558-7d4d15bc3cf1';
  $export['sharethis_publisherID'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'systems@';
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
  $strongarm->name = 'site_slogan';
  $strongarm->value = '';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'prostarter';
  $export['theme_default'] = $strongarm;

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
