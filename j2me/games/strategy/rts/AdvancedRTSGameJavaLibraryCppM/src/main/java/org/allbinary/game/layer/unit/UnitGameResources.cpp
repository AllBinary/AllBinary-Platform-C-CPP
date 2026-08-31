
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UnitGameResources: public BasicGameResources {
        

    private: static const ICON: string = "_icon";

    private: static const BUILD: string = "_build";

    private: static const DESTROY: string = "_destroy";

    private: static const ICON_BUILD: string = "_icon" +UnitGameResources.BUILD;

    public NAME: string = StringUtil.getInstance()!.EMPTY_STRING;

    public RESOURCE_ICON_ANIMATION: string = StringUtil.getInstance()!.EMPTY_STRING;

    public RESOURCE_ICON_BUILD: string = StringUtil.getInstance()!.EMPTY_STRING;

    public RESOURCE_ICON: string = StringUtil.getInstance()!.EMPTY_STRING;

protected constructor (){

            super();
        }


    private: const ICON_SIZE: string = "_64_by_64.png";

                //@Throws(Exception.constructor)
            
    append(string ROOT, string sizeString){
super.append(ROOT, sizeString);
    

    string: string = GameGraphicsResourceUtil.getInstance()!.getName()!;;
    
BasicGameResources.stringBuffer!.delete(0, BasicGameResources.stringBuffer!.length());
    
BasicGameResources.stringBuffer!.append(ROOT);
    
BasicGameResources.stringBuffer!.append(UnitGameResources.DESTROY);
    
BasicGameResources.stringBuffer!.append(string);
    
BasicGameResources.stringBuffer!.append(sizeString);
    
this.RESOURCE_DESTROY= BasicGameResources.stringBuffer!.toString();
    
BasicGameResources.stringBuffer!.delete(0, BasicGameResources.stringBuffer!.length());
    
BasicGameResources.stringBuffer!.append(UnitGameResources.ICON);
    
BasicGameResources.stringBuffer!.append(ROOT);
    
this.RESOURCE_ICON_ANIMATION= BasicGameResources.stringBuffer!.toString();
    
BasicGameResources.stringBuffer!.delete(0, BasicGameResources.stringBuffer!.length());
    
BasicGameResources.stringBuffer!.append(ROOT);
    
BasicGameResources.stringBuffer!.append(UnitGameResources.ICON);
    
BasicGameResources.stringBuffer!.append(string);
    
BasicGameResources.stringBuffer!.append(this.ICON_SIZE);
    
this.RESOURCE_ICON= BasicGameResources.stringBuffer!.toString();
    
BasicGameResources.stringBuffer!.delete(0, BasicGameResources.stringBuffer!.length());
    
BasicGameResources.stringBuffer!.append(ROOT);
    
BasicGameResources.stringBuffer!.append(UnitGameResources.ICON_BUILD);
    
BasicGameResources.stringBuffer!.append(string);
    
BasicGameResources.stringBuffer!.append(this.ICON_SIZE);
    
this.RESOURCE_ICON_BUILD= BasicGameResources.stringBuffer!.toString();
    
}


                //@Throws(Exception.constructor)
            
    string getString(){

                        if(AndroidUtil.isAndroid())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameGraphicsResourceUtil.getInstance()!.getStringForFeature(GraphicsFeatureFactory.getInstance()!.SPRITE_QUARTER_ROTATION_GRAPHICS);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getString();;
    

                        }
                            
}


};

            

