<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
<div id="wrap" class="clr container">
  <div id="header-wrap" class="clr">
    <header id="header" class="site-header clr">
      <div id="logo" class="clr">
        <?php if (theme_get_setting('image_logo','blogger_theme')): ?>
        <?php if ($logo): ?><div class="site-img-logo clr"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a></div><?php endif; ?>
        <?php else: ?>
        <div class="site-text-logo clr">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
          <?php if ($site_slogan): ?><div class="blog-description"><?php print $site_slogan; ?></div><?php endif; ?>
        </div>
        <?php endif; ?>
      </div>
    </header>
    <?php if ($page['search_block']): ?>
      <aside id="header-aside" class="clr">
        <?php print render($page['search_block']); ?>
      </aside>
    <?php endif; ?>
  </div>
      
  <div id="site-navigation-wrap">
    <div id="sidr-close"><a href="#sidr-close" class="toggle-sidr-close"></a></div>
    <nav id="site-navigation" class="navigation main-navigation clr" role="navigation">
      <a href="#sidr-main" id="navigation-toggle"><span class="fa fa-bars"></span>Menu</a>
      <div id="main-menu" class="menu-main-container">
        <?php 
          $main_menu_tree = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
          print drupal_render($main_menu_tree);
        ?>
      </div>
    </nav>
  </div>

  <?php if ($page['preface_first'] || $page['preface_middle'] || $page['preface_last']  || $page['header']): ?>
  <div id="preface-wrap" class="site-preface clr">
    <div id="preface" class="clr">
      <?php if ($page['preface_first'] || $page['preface_middle'] || $page['preface_last']): ?>
        <div id="preface-block-wrap" class="clr">
          <?php if($page['preface_first']): ?><div class="span_1_of_3 col col-1 preface-block ">
            <?php print render ($page['preface_first']); ?>
          </div><?php endif; ?>
          <?php if($page['preface_middle']): ?><div class="span_1_of_3 col col-2 preface-block ">
            <?php print render ($page['preface_middle']); ?>
          </div><?php endif; ?>
          <?php if($page['preface_last']): ?><div class="span_1_of_3 col col-3 preface-block ">
            <?php print render ($page['preface_last']); ?>
          </div><?php endif; ?>
        </div>
      <?php endif; ?>
      <?php if ($page['header']): ?>
        <div class="span_1_of_1 col col-1">
          <?php print render($page['header']); ?>
        </div>
      <?php endif; ?>
    </div>
  </div>
  <?php endif; ?>


  <div id="main" class="site-main clr">
    <div id="primary" class="content-area clr">
      <?php $sidebarclass = ""; if($page['sidebar_first']) { $sidebarclass="left-content"; } ?>
      <section id="content" role="main" class="site-content <?php print $sidebarclass; ?> clr">
        <?php if ($is_front): ?>
        <?php if (theme_get_setting('slideshow_display','blogger_theme')): ?>
        <?php 
          $slide1_head = check_plain(theme_get_setting('slide1_head','blogger_theme'));   $slide1_desc = check_markup(theme_get_setting('slide1_desc','blogger_theme'), 'full_html'); $slide1_url = check_plain(theme_get_setting('slide1_url','blogger_theme'));
          $slide2_head = check_plain(theme_get_setting('slide2_head','blogger_theme'));   $slide2_desc = check_markup(theme_get_setting('slide2_desc','blogger_theme'), 'full_html'); $slide2_url = check_plain(theme_get_setting('slide2_url','blogger_theme'));
          $slide3_head = check_plain(theme_get_setting('slide3_head','blogger_theme'));   $slide3_desc = check_markup(theme_get_setting('slide3_desc','blogger_theme'), 'full_html'); $slide3_url = check_plain(theme_get_setting('slide3_url','blogger_theme'));
        ?>
        <div id="featured-slider-wrap" class="clr">
          <div id="featured-slider" class="flexslider-container">
            <div class="flexslider">
              <ul class="slides">
                <li class="featured-slider-slide">
                  <div class="featured-slider-img">
                    <a href="<?php print url($slide1_url); ?>">
                      <img src="<?php print base_path() . drupal_get_path('theme', 'blogger_theme') . '/images/slide-image-1.jpg'; ?>" />
                    </a>
                  </div>
                  <?php if($slide1_head || $slide1_desc) : ?>
                  <article class="featured-slider-caption">
                    <h2 class="featured-slider-caption-title"><a href="<?php print url($slide1_url); ?>"><?php print $slide1_head; ?></a></h2>
                    <div class="featured-slider-caption-excerpt clr">
                      <?php print $slide1_desc; ?>
                    </div>
                  </article>
                  <?php endif; ?>
                </li>
                <li class="featured-slider-slide">
                  <div class="featured-slider-img">
                    <a href="<?php print url($slide2_url); ?>">
                      <img src="<?php print base_path() . drupal_get_path('theme', 'blogger_theme') . '/images/slide-image-2.jpg'; ?>" />
                    </a>
                  </div>
                  <?php if($slide1_head || $slide1_desc) : ?>
                  <article class="featured-slider-caption">
                    <h2 class="featured-slider-caption-title"><a href="<?php print url($slide2_url); ?>"><?php print $slide2_head; ?></a></h2>
                    <div class="featured-slider-caption-excerpt clr">
                      <?php print $slide2_desc; ?>
                    </div>
                  </article>
                  <?php endif; ?>
                </li>
                <li class="featured-slider-slide">
                  <div class="featured-slider-img">
                    <a href="<?php print url($slide3_url); ?>">
                      <img src="<?php print base_path() . drupal_get_path('theme', 'blogger_theme') . '/images/slide-image-3.jpg'; ?>" />
                    </a>
                  </div>
                  <?php if($slide3_head || $slide3_desc) : ?>
                  <article class="featured-slider-caption">
                    <h2 class="featured-slider-caption-title"><a href="<?php print url($slide3_url); ?>"><?php print $slide3_head; ?></a></h2>
                    <div class="featured-slider-caption-excerpt clr">
                      <?php print $slide3_desc; ?>
                    </div>
                  </article>
                  <?php endif; ?>
                </li>
              </ul>
            </div>
          </div>
        </div>     
        <?php endif; ?>
        <?php endif; ?>

        <?php if (theme_get_setting('breadcrumbs')): ?><?php if ($breadcrumb): ?><div id="breadcrumbs"><?php print $breadcrumb; ?></div><?php endif;?><?php endif; ?>
        <?php print $messages; ?>
        <?php if ($page['content_top']): ?><div id="content_top"><?php print render($page['content_top']); ?></div><?php endif; ?>
        <div id="content-wrap">
          <?php print render($title_prefix); ?>
          <?php if ($title): ?><h1 class="page-title"><?php print $title; ?></h1><?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php if (!empty($tabs['#primary'])): ?><div class="tabs-wrapper clr"><?php print render($tabs); ?></div><?php endif; ?>
          <?php print render($page['help']); ?>
          <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
          <?php print render($page['content']); ?>
        </div>
      </section>

      <?php if ($page['sidebar_first']): ?>
        <aside id="secondary" class="sidebar-container" role="complementary">
         <?php print render($page['sidebar_first']); ?>
        </aside> 
      <?php endif; ?>
    </div>
  </div>

  
  <footer id="footer-wrap" class="site-footer clr">
    <?php if ($page['footer_first'] || $page['footer_second'] || $page['footer_third']  || $page['footer']): ?>
    <div id="footer" class="clr">
      <?php if ($page['footer_first'] || $page['footer_second'] || $page['footer_third']): ?>
        <div id="footer-block-wrap" class="clr">
          <?php if($page['footer_first']): ?><div class="span_1_of_3 col col-1 footer-block ">
            <?php print render ($page['footer_first']); ?>
          </div><?php endif; ?>
          <?php if($page['footer_second']): ?><div class="span_1_of_3 col col-2 footer-block ">
            <?php print render ($page['footer_second']); ?>
          </div><?php endif; ?>
          <?php if($page['footer_third']): ?><div class="span_1_of_3 col col-3 footer-block ">
            <?php print render ($page['footer_third']); ?>
          </div><?php endif; ?>
        </div>
      <?php endif; ?>
      
      <?php if ($page['footer']): ?>
        <div class="span_1_of_1 col col-1">
          <?php print render($page['footer']); ?>
        </div>
      <?php endif; ?>
    </div>
    <?php endif; ?>
    <div id="copyright" role="contentinfo" class="clr"><?php print t('Copyright'); ?> &copy; <?php echo date("Y"); ?>, <a href="<?php print $front_page; ?>"><?php print $site_name; ?></a>.</div>
  </footer>

</div>
