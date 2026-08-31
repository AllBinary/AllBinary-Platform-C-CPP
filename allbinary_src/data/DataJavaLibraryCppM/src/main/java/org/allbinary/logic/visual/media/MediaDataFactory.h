
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
        

    private: static const instance: MediaDataFactory = new MediaDataFactory();

    public static MediaDataFactory getInstance();

    public const AVI: MediaData = new MediaData("avi");

    public const BMP: MediaData = new MediaData("bmp");

    public const CEL: MediaData = new MediaData("cel");

    public const FITS: MediaData = new MediaData("fits");

    public const FLI: MediaData = new MediaData("fli");

    public const GBR: MediaData = new MediaData("gbr");

    public const GIF: MediaData = new MediaData("gif");

    public const GIH: MediaData = new MediaData("gih");

    public const JPG: MediaData = new MediaData("jpg");

    public const PIX: MediaData = new MediaData("pix");

    public const PNG: MediaData = new MediaData("png");

    public const PNM: MediaData = new MediaData("pnm");

    public const PSD: MediaData = new MediaData("psd");

    public const PSP: MediaData = new MediaData("psp");

    public const PS: MediaData = new MediaData("ps");

    public const SGI: MediaData = new MediaData("SGI");

    public const SWF: MediaData = new MediaData("swf");

    public const TGA: MediaData = new MediaData("tga");

    public const TIFF: MediaData = new MediaData("tiff");

    public const WMF: MediaData = new MediaData("wmf");

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATAFACTORY_H
