
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIATYPEDATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIATYPEDATA_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MediaTypeData
            : public Object
         {

    private: static MediaTypeData instance() { return MediaTypeData(); }

    public: static MediaTypeData getInstance();

private: MediaTypeData();

    public: const std::string RESIZABLE_MEDIA = "RESIZABLE_MEDIA";

    public: const std::string NOT_RESIZABLE_MEDIA = "NOT_RESIZABLE_MEDIA";

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIATYPEDATA_H
