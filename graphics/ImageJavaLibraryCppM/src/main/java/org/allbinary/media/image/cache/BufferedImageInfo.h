
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEINFO_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEINFO_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BufferedImageInfo
            : public Object
         {

    private: int32_t width;

    private: int32_t height;

    private: int32_t type;

public: BufferedImageInfo(int32_t width, int32_t height, int32_t type);

    public: int32_t getWidth();

    public: void setWidth(int32_t width);

    public: int32_t getHeight();

    public: void setHeight(int32_t height);

    public: int32_t getType();

    public: void setType(int32_t type);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEINFO_H
