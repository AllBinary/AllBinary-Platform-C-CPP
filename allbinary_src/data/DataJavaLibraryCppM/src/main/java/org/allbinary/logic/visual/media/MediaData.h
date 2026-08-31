
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MediaTypeData.h"
#include "MediaDataFactory.h"

class MediaData
            : public Object
         {
        

    private: static hashMap: HashMap<any, any> = new HashMap<any, any>();

                //@Throws(Exception.constructor)
            
    public static MediaData get(string a_Name);

    public static MediaData getDefault();

    public static HashMap<any, any> toHashMap();

    private: name: string;

    private: type: string;

    private: extension: string;

protected constructor (string a_Name);

    public string getName();

    public string getType();

    public string getExtension();

    public bool isConvertableTo(MediaData mediaData);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATA_H
