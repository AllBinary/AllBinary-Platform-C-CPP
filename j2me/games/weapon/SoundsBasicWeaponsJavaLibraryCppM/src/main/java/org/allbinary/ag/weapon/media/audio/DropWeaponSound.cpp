
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
        



#include <org/allbinary/media/audio/CompositeSound.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DropWeaponSound: public CompositeSound {
        

    private: static soundInterface: Sound = new DropWeaponSound();

    public static Sound getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DropWeaponSound.soundInterface;
    
}


private constructor (){
            super("resource:/wav/mine.wav");
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

