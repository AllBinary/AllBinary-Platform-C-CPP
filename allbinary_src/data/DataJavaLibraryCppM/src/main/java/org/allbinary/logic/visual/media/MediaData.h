
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class StdUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MediaTypeData;
class MediaDataFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MediaData
            : public virtual Object
         {

    private: static HashMap<Object*, Object*>* hashMap;

                //@Throws(Exception.constructor)
            
    public: static MediaData* get(std::string a_Name);

    public: static MediaData* getDefault();

    public: static HashMap<Object*, Object*>* toHashMap();

    private: std::string name;

    private: std::string type;

    private: std::string extension;

/*protected*/ public: MediaData(std::string a_Name);

    public: std::string getName();

    public: std::string getType();

    public: std::string getExtension();

    public: bool isConvertableTo(MediaData* mediaData);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATA_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include("org/allbinary/logic/visual/media/MediaTypeData.h")
#include "org/allbinary/logic/visual/media/MediaTypeData.h"
#endif
#if __has_include("org/allbinary/logic/visual/media/MediaDataFactory.h")
#include "org/allbinary/logic/visual/media/MediaDataFactory.h"
#endif

        #endif
    
