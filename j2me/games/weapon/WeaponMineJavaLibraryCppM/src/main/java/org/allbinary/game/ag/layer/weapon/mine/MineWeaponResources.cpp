
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
        



            #include <vector>
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MineWeaponResources: public BasicGameResources {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static MineWeaponResources getInstance(){

                        if(MineWeaponResources::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    MineWeaponResources::instance= MineWeaponResources();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MineWeaponResources::instance();
    
}


    public: const std::string DROP_TEXT_RESOURCE = "/mine_drop_text_20_by_20.png";

    public: const std::string DROP_RESOURCE = "/mine_drop_20_by_20.png";

    public: const std::string DROP_ICON_RESOURCE = "/mine_drop_icon_20_by_20.png";

protected: MineWeaponResources(){

    std::string ROOT = "/mine";;
    

    std::string SMALL = "_20_by_20.png";;
    

    std::string MEDIUM = SMALL;;
    

    std::string SIZE_FOUR = SMALL;;
    

    std::string SIZE_FIVE = SMALL;;
    

    std::string SIZE_SIX = SMALL;;
    

    std::vector<std::string> SIZE = 
                                                        {
                                                            SMALL,MEDIUM,SIZE_FOUR,SIZE_FIVE,SIZE_SIX
                                                        };;
    
super.init(ROOT, SIZE);
    
}


};

            

