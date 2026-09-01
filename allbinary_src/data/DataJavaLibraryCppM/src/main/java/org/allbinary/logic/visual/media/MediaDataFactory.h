
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATAFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATAFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MediaData.h"

class MediaDataFactory
            : public Object
         {

    private: static MediaDataFactory instance() { return MediaDataFactory(); }

    public: static MediaDataFactory getInstance();

    public: const MediaData AVI = MediaData("avi");

    public: const MediaData BMP = MediaData("bmp");

    public: const MediaData CEL = MediaData("cel");

    public: const MediaData FITS = MediaData("fits");

    public: const MediaData FLI = MediaData("fli");

    public: const MediaData GBR = MediaData("gbr");

    public: const MediaData GIF = MediaData("gif");

    public: const MediaData GIH = MediaData("gih");

    public: const MediaData JPG = MediaData("jpg");

    public: const MediaData PIX = MediaData("pix");

    public: const MediaData PNG = MediaData("png");

    public: const MediaData PNM = MediaData("pnm");

    public: const MediaData PSD = MediaData("psd");

    public: const MediaData PSP = MediaData("psp");

    public: const MediaData PS = MediaData("ps");

    public: const MediaData SGI = MediaData("SGI");

    public: const MediaData SWF = MediaData("swf");

    public: const MediaData TGA = MediaData("tga");

    public: const MediaData TIFF = MediaData("tiff");

    public: const MediaData WMF = MediaData("wmf");

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATAFACTORY_H
