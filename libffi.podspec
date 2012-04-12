Pod::Spec.new do |s|
  s.name     = 'libffi'
  s.version  = '3.0.11'
  s.license  = 'MIT'
  s.summary  = 'A portable foreign-function interface library.'
  s.homepage = 'http://sourceware.org/libffi/'
  s.author   = { 'Anthony Green', 'green@moxielogic.com',
                 'Raffaele Sena' => 'aff367@gmail.com',
                 'Jon Beniston' => 'jon@beniston.com',
                 'Bo Thorsen' => 'bo@suse.de',
                 'Landon Fuller' => 'landonf@plausible.coop',
                 'Zachary Waldowski' => 'zwaldowski@gmail.com' }
  s.source   = { :git => 'https://github.com/zwaldowski/libffi-iOS.git', :tag => 'v3.0.11' }
  s.clean_paths = 'patches/', 'libffi.xcodeproj/', '.gitignore'
  s.source_files = 'include/*.h', 'src/*.c', 'src/arm/*.{c,S}', 'src/x86/*.{c,S}'
end