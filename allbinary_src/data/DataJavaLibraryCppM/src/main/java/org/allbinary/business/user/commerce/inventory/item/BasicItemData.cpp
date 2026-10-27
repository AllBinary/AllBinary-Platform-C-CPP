
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
        
class BasicItemData
            : public Object
         {

    private: static BasicItemData* instance() { static std::unique_ptr<BasicItemData> value(new BasicItemData()); return value.get(); }

    public: static BasicItemData* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicItemData::instance();
    
}


    public: const std::string ITEM = "BASICITEM";

    public: const std::string TOTAL = "BASICITEM_TOTAL";

    public: const std::string ID = "BASICITEM_ID";

    public: const std::string NUMBER = "BASICITEM_NUMBER";

    public: const std::string INBASKETS = "BASICITEM_IN_BASKETS";

    public: const std::string WEIGHT = "BASICITEM_WEIGHT";

    public: const std::string NEWORUSED = "BASICITEM_NEW_OR_USED";

    public: const std::string SUMMARY = "BASICITEM_SUMMARY";

    public: const std::string DISTRIBUTOR = "BASICITEM_DISTRIBUTOR";

    public: const std::string IDUSEDBYDISTRIBUTOR = "BASICITEM_IDUSEDBYDISTRIBUTOR";

    public: const std::string PRODUCEDBY = "BASICITEM_PRODUCEDBY";

    public: const std::string PRODUCTIONDATE = "BASICITEM_PRODUCTIONDATE";

    public: const std::string STARTPRODUCTIONDATE = "BASICITEM_STARTPRODUCTIONDATE";

    public: const std::string DESCRIPTION = "BASICITEM_DESCRIPTION";

    public: const std::string KEYWORDS = "BASICITEM_KEYWORDS";

    public: const std::string CATEGORY = "BASICITEM_CATEGORY";

    public: const std::string TYPE = "BASICITEM_TYPE";

    public: const std::string IMAGE = "BASICITEM_IMG";

    public: const std::string SMALLIMAGE = "BASICITEM_SMALL_IMG";

    public: const std::string MEDIUMIMAGE = "BASICITEM_MEDIUM_IMG";

    public: const std::string LARGEIMAGE = "BASICITEM_LARGE_IMG";

    public: const std::string PRICE = "BASICITEM_PRICE";

    public: const std::string COMMENT = "BASICITEM_COMMENT";

    public: const std::string CUSTOMS = "BASICITEM_CUSTOMS";

    public: const std::string DOWNLOADS = "BASICITEM_DOWNLOADS";

    public: const std::string GROUPS = "BASICITEM_GROUPS";

    public: const std::string OPTIONS = "BASICITEM_OPTIONS";

    public: const std::string PERMISSIONS = "BASICITEM_PERMISSIONS";

    public: const std::string SPECIALS = "BASICITEM_SPECIALS";

};

            

