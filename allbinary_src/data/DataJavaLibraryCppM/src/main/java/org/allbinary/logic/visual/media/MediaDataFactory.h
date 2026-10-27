
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MediaData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MediaDataFactory
            : public virtual Object
         {

    private: static MediaDataFactory* instance_owner();
    private: static MediaDataFactory* instance;

    public: static MediaDataFactory* getInstance();


            
    public: MediaDataFactory();
        
    public: MediaData* AVI;

    public: MediaData* BMP;

    public: MediaData* CEL;

    public: MediaData* FITS;

    public: MediaData* FLI;

    public: MediaData* GBR;

    public: MediaData* GIF;

    public: MediaData* GIH;

    public: MediaData* JPG;

    public: MediaData* PIX;

    public: MediaData* PNG;

    public: MediaData* PNM;

    public: MediaData* PSD;

    public: MediaData* PSP;

    public: MediaData* PS;

    public: MediaData* SGI;

    public: MediaData* SWF;

    public: MediaData* TGA;

    public: MediaData* TIFF;

    public: MediaData* WMF;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATAFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATAFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATAFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/logic/visual/media/MediaData.h")
#include "org/allbinary/logic/visual/media/MediaData.h"
#endif

        #endif
    
