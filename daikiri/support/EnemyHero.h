//
//  Enemy_Hero.h
//  daikiri
//
//  Created by Jordi Puigdellívol on 17/4/16.
//  Copyright © 2016 revo. All rights reserved.
//

#import "Daikiri.h"
#import "Enemy.h"
#import "Hero.h"

@interface EnemyHero : Daikiri
@property (strong,nonatomic) NSNumber* hero_id;
@property (strong,nonatomic) NSNumber* enemy_id;
@property (strong,nonatomic) NSNumber* level;

-(Enemy*)enemy;
-(Hero*)hero;

@end
