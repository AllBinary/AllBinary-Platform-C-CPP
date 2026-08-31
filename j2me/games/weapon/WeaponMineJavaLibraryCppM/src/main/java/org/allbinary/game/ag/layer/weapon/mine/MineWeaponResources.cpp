
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
        



#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MineWeaponResources: public BasicGameResources {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static MineWeaponResources getInstance(){

                        if(MineWeaponResources.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    MineWeaponResources.instance= new MineWeaponResources();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MineWeaponResources.instance as MineWeaponResources;
    
}


    public const DROP_TEXT_RESOURCE: string = "/mine_drop_text_20_by_20.png";

    public const DROP_RESOURCE: string = "/mine_drop_20_by_20.png";

    public const DROP_ICON_RESOURCE: string = "/mine_drop_icon_20_by_20.png";

protected constructor (){

            super();
        
    ROOT: string = "/mine";;
    

    SMALL: string = "_20_by_20.png";;
    

    MEDIUM: string = SMALL;;
    

    SIZE_FOUR: string = SMALL;;
    

    SIZE_FIVE: string = SMALL;;
    

    SIZE_SIX: string = SMALL;;
    

    SIZE: std::vector<string> = 
                                                        [
                                                            SMALL,MEDIUM,SIZE_FOUR,SIZE_FIVE,SIZE_SIX
                                                        ];;
    
super.init(ROOT, SIZE);
    
}


};

            

