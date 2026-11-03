
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATAFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATAFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/media/MediaDataFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/media/MediaData.h"


MediaDataFactory::MediaDataFactory() : AVI(new MediaData("avi")), BMP(new MediaData("bmp")), CEL(new MediaData("cel")), FITS(new MediaData("fits")), FLI(new MediaData("fli")), GBR(new MediaData("gbr")), GIF(new MediaData("gif")), GIH(new MediaData("gih")), JPG(new MediaData("jpg")), PIX(new MediaData("pix")), PNG(new MediaData("png")), PNM(new MediaData("pnm")), PSD(new MediaData("psd")), PSP(new MediaData("psp")), PS(new MediaData("ps")), SGI(new MediaData("SGI")), SWF(new MediaData("swf")), TGA(new MediaData("tga")), TIFF(new MediaData("tiff")), WMF(new MediaData("wmf")) {
        }
        auto MediaDataFactory::instance_owner() -> MediaDataFactory* { static std::unique_ptr<MediaDataFactory> value(new MediaDataFactory()); return value.get(); }
MediaDataFactory* MediaDataFactory::instance = MediaDataFactory::instance_owner();

    auto MediaDataFactory::getInstance() -> MediaDataFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return MediaDataFactory::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATAFACTORY_CPP
