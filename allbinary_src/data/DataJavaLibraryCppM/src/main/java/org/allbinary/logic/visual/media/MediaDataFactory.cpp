
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/media/MediaData.h"

class MediaDataFactory
            : public Object
         {

    private: static MediaDataFactory* instance() { static std::unique_ptr<MediaDataFactory> value(new MediaDataFactory()); return value.get(); }

    public: static MediaDataFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaDataFactory::instance();
    
}


    public: MediaData* AVI = new MediaData("avi");

    public: MediaData* BMP = new MediaData("bmp");

    public: MediaData* CEL = new MediaData("cel");

    public: MediaData* FITS = new MediaData("fits");

    public: MediaData* FLI = new MediaData("fli");

    public: MediaData* GBR = new MediaData("gbr");

    public: MediaData* GIF = new MediaData("gif");

    public: MediaData* GIH = new MediaData("gih");

    public: MediaData* JPG = new MediaData("jpg");

    public: MediaData* PIX = new MediaData("pix");

    public: MediaData* PNG = new MediaData("png");

    public: MediaData* PNM = new MediaData("pnm");

    public: MediaData* PSD = new MediaData("psd");

    public: MediaData* PSP = new MediaData("psp");

    public: MediaData* PS = new MediaData("ps");

    public: MediaData* SGI = new MediaData("SGI");

    public: MediaData* SWF = new MediaData("swf");

    public: MediaData* TGA = new MediaData("tga");

    public: MediaData* TIFF = new MediaData("tiff");

    public: MediaData* WMF = new MediaData("wmf");

};

            

