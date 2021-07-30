#
# Be sure to run `pod lib lint ZTBaseView.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = 'ZTBaseView'
    s.version          = '1.0.0'
    s.summary          = 'ZTBaseView is the basic framework of OC project.'
    s.homepage         = 'https://github.com/CherishSmile/ZTBaseView'
    s.license          = { :type => 'MIT', :file => 'LICENSE' }
    s.author           = { 'CherishSmile' => 'misteralvin@yeah.net' }
    s.source           = { :git => 'https://github.com/CherishSmile/ZTBaseView.git', :tag => s.version.to_s }
    s.ios.deployment_target = '10.0'
    s.requires_arc = true
    
    
    s.source_files = 'ZTBaseView/ZTBaseView.framework/Headers/*.{h}'
    s.vendored_frameworks = 'ZTBaseView/ZTBaseView.framework'
    s.public_header_files = 'ZTBaseView/ZTBaseView.framework/Headers/*.{h}'
    s.resource = 'ZTBaseView/ZTBaseView.framework/Resource.bundle'

    s.pod_target_xcconfig = {
      'VALID_ARCHS' => 'x86_64 armv7 arm64'
    }
    s.dependency 'ZTBase'
    s.dependency 'DZNEmptyDataSet'
    s.dependency 'MJRefresh'
    s.dependency 'Masonry'
    s.dependency 'KMNavigationBarTransition'

end
