
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/media/MediaTypeData.h"
#include "org/allbinary/logic/visual/media/MediaDataFactory.h"

class MediaData
            : public Object
         {

    private: static inline HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();

                //@Throws(Exception.constructor)
            
    public: static MediaData* get(std::string a_Name);

    public: static MediaData* getDefault();

    public: static HashMap<Object*, Object*>* toHashMap();

    private: std::string name;

    private: std::string type;

    private: std::string extension;

protected: MediaData(std::string a_Name);

    public: std::string getName();

    public: std::string getType();

    public: std::string getExtension();

    public: bool isConvertableTo(MediaData* mediaData);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATA_H
