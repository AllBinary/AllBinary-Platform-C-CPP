
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

#include <java/io/File.h>

      
#include <javax/swing/filechooser/FileFilter.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //TWB - replace with file visitor version
class ImageFileFilter: public FileFilter {

    public: bool accept(File f);

    public: std::string getDescription();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_FILTER_IMAGEFILEFILTER_H
