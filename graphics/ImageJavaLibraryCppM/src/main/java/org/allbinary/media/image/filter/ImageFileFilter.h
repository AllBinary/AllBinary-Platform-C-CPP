
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_FILTER_IMAGEFILEFILTER_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_FILTER_IMAGEFILEFILTER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/File.h>
#include <javax/swing/filechooser/FileFilter.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //TWB - replace with file visitor version
class ImageFileFilter: public FileFilter {


            
    public: ImageFileFilter();
        
    public: bool accept(File* f);

    public: std::string getDescription();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_FILTER_IMAGEFILEFILTER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_FILTER_IMAGEFILEFILTER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_FILTER_IMAGEFILEFILTER_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<javax/swing/filechooser/FileFilter.h>)
#include <javax/swing/filechooser/FileFilter.h>
#endif

        #endif
    
