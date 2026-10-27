
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTH_CPP
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTH_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/health/Health.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/health/HealthInterface.h"
#include "org/allbinary/game/health/NullHealthListener.h"
#include "org/allbinary/game/health/HealthListenerInterface.h"

auto Health::NULL_HEALTH_owner() -> Health* { static std::unique_ptr<Health> value(new Health(0)); return value.get(); }
Health* Health::NULL_HEALTH = Health::NULL_HEALTH_owner();

Health::Health(int32_t maxHealth) : healthListenerInterface(NullHealthListener::NULL_HEALTH_LISTENER){
this->setMaxHealth(maxHealth);
    
this->setHealth(maxHealth);
    
}


    auto Health::heal(int32_t ahealth) -> void{

    int32_t newHealth = this->getHealth() +ahealth;;
    

                        if(newHealth > this->getMaxHealth())
                        
                                    {
                                    this->setHealth(this->getMaxHealth());
    

                                    }
                                
                        else {
                            this->setHealth(newHealth);
    

                        }
                            
}


    auto Health::healMax() -> void{
this->setHealth(this->getMaxHealth());
    
}


    auto Health::isDamaged() -> bool{

                        if(this->getHealth() != this->getMaxHealth())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto Health::damage(int32_t ahealth) -> void{

                        if(ahealth < 0)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("******* Trying to heal when damaging. Damage: ");
    
stringBuffer->appendint(ahealth);
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(this->toString());
    
ForcedLogUtil::log(stringBuffer->toString(), this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    int32_t health = this->getHealth() -ahealth;;
    
this->setHealth(health);
    
}


    auto Health::isAlive() -> bool{

                        if(this->getHealth() <= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    auto Health::getMaxHealth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxHealth;
    
}


    auto Health::setMaxHealth(int32_t maxHealth) -> void{
this->maxHealth= maxHealth;
    
}


    auto Health::setHealth(int32_t health) -> void{

                        if(health > this->getMaxHealth())
                        
                                    {
                                    this->health= this->getMaxHealth();
    

                                    }
                                
                             else 
                        if(health < 0)
                        
                                    {
                                    this->health= 0;
    

                                    }
                                
                        else {
                            this->health= health;
    

                        }
                            

                        if(this->healthListenerInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->healthListenerInterface->onHealthChange();
    

                                    }
                                
}


    auto Health::getHealth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->health;
    
}


    auto Health::addListener(HealthListenerInterface* healthGraphic) -> void{
this->healthListenerInterface= healthGraphic;
    
}


    auto Health::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(Health::HEALTH_LABEL);
    
stringBuffer->appendint(this->health);
    
stringBuffer->append(Health::MAX_HEALTH_LABEL);
    
stringBuffer->appendint(this->maxHealth);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTH_CPP
