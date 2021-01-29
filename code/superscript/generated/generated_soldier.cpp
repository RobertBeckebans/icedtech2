// This file has been auto generated by the QuakeToC conversion tool
//

#include "../../game/g_local.h "
#include "../superscript.h"
extern "C"
{
#include "generated_soldier.h"
};

void army_stand1( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { stand1, stand1, &frame, army_stand2 };
	self->monsterinfo.currentmove = &move;
	// Anim Start function
	G_SendAnimUpdate( self, anim_event_stand, stand1, stand8 );
}
void army_stand2( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { stand2, stand2, &frame, army_stand3 };
	self->monsterinfo.currentmove = &move;
}
void army_stand3( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { stand3, stand3, &frame, army_stand4 };
	self->monsterinfo.currentmove = &move;
}
void army_stand4( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { stand4, stand4, &frame, army_stand5 };
	self->monsterinfo.currentmove = &move;
}
void army_stand5( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { stand5, stand5, &frame, army_stand6 };
	self->monsterinfo.currentmove = &move;
}
void army_stand6( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { stand6, stand6, &frame, army_stand7 };
	self->monsterinfo.currentmove = &move;
}
void army_stand7( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { stand7, stand7, &frame, army_stand8 };
	self->monsterinfo.currentmove = &move;
}
void army_stand8( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { stand8, stand8, &frame, army_stand1 };
	self->monsterinfo.currentmove = &move;
}
void army_walk1( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 1, NULL };
	static mmove_t  move          = { prowl_1, prowl_1, &frame, army_walk2 };
	self->monsterinfo.currentmove = &move;
	// Anim Start function
	G_SendAnimUpdate( self, anim_event_prowl_, prowl_1, prowl_24 );

	if( random() < 0.2 )
		sound( self, CHAN_VOICE, "soldier/idle.wav", 1, ATTN_IDLE );
}
void army_walk2( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 1, NULL };
	static mmove_t  move          = { prowl_2, prowl_2, &frame, army_walk3 };
	self->monsterinfo.currentmove = &move;
}
void army_walk3( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 1, NULL };
	static mmove_t  move          = { prowl_3, prowl_3, &frame, army_walk4 };
	self->monsterinfo.currentmove = &move;
}
void army_walk4( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 1, NULL };
	static mmove_t  move          = { prowl_4, prowl_4, &frame, army_walk5 };
	self->monsterinfo.currentmove = &move;
}
void army_walk5( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 2, NULL };
	static mmove_t  move          = { prowl_5, prowl_5, &frame, army_walk6 };
	self->monsterinfo.currentmove = &move;
}
void army_walk6( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 3, NULL };
	static mmove_t  move          = { prowl_6, prowl_6, &frame, army_walk7 };
	self->monsterinfo.currentmove = &move;
}
void army_walk7( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 4, NULL };
	static mmove_t  move          = { prowl_7, prowl_7, &frame, army_walk8 };
	self->monsterinfo.currentmove = &move;
}
void army_walk8( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 4, NULL };
	static mmove_t  move          = { prowl_8, prowl_8, &frame, army_walk9 };
	self->monsterinfo.currentmove = &move;
}
void army_walk9( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 2, NULL };
	static mmove_t  move          = { prowl_9, prowl_9, &frame, army_walk10 };
	self->monsterinfo.currentmove = &move;
}
void army_walk10( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 2, NULL };
	static mmove_t  move          = { prowl_10, prowl_10, &frame, army_walk11 };
	self->monsterinfo.currentmove = &move;
}
void army_walk11( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 2, NULL };
	static mmove_t  move          = { prowl_11, prowl_11, &frame, army_walk12 };
	self->monsterinfo.currentmove = &move;
}
void army_walk12( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 1, NULL };
	static mmove_t  move          = { prowl_12, prowl_12, &frame, army_walk13 };
	self->monsterinfo.currentmove = &move;
}
void army_walk13( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 0, NULL };
	static mmove_t  move          = { prowl_13, prowl_13, &frame, army_walk14 };
	self->monsterinfo.currentmove = &move;
}
void army_walk14( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 1, NULL };
	static mmove_t  move          = { prowl_14, prowl_14, &frame, army_walk15 };
	self->monsterinfo.currentmove = &move;
}
void army_walk15( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 1, NULL };
	static mmove_t  move          = { prowl_15, prowl_15, &frame, army_walk16 };
	self->monsterinfo.currentmove = &move;
}
void army_walk16( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 1, NULL };
	static mmove_t  move          = { prowl_16, prowl_16, &frame, army_walk17 };
	self->monsterinfo.currentmove = &move;
}
void army_walk17( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 3, NULL };
	static mmove_t  move          = { prowl_17, prowl_17, &frame, army_walk18 };
	self->monsterinfo.currentmove = &move;
}
void army_walk18( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 3, NULL };
	static mmove_t  move          = { prowl_18, prowl_18, &frame, army_walk19 };
	self->monsterinfo.currentmove = &move;
}
void army_walk19( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 3, NULL };
	static mmove_t  move          = { prowl_19, prowl_19, &frame, army_walk20 };
	self->monsterinfo.currentmove = &move;
}
void army_walk20( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 3, NULL };
	static mmove_t  move          = { prowl_20, prowl_20, &frame, army_walk21 };
	self->monsterinfo.currentmove = &move;
}
void army_walk21( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 2, NULL };
	static mmove_t  move          = { prowl_21, prowl_21, &frame, army_walk22 };
	self->monsterinfo.currentmove = &move;
}
void army_walk22( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 1, NULL };
	static mmove_t  move          = { prowl_22, prowl_22, &frame, army_walk23 };
	self->monsterinfo.currentmove = &move;
}
void army_walk23( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 1, NULL };
	static mmove_t  move          = { prowl_23, prowl_23, &frame, army_walk24 };
	self->monsterinfo.currentmove = &move;
}
void army_walk24( gentity_t* self )
{
	static mframe_t frame         = { ai_walk, 1, NULL };
	static mmove_t  move          = { prowl_24, prowl_24, &frame, army_walk1 };
	self->monsterinfo.currentmove = &move;
}
void army_run1( gentity_t* self )
{
	static mframe_t frame         = { ai_run, 11, NULL };
	static mmove_t  move          = { run1, run1, &frame, army_run2 };
	self->monsterinfo.currentmove = &move;
	// Anim Start function
	G_SendAnimUpdate( self, anim_event_run, run1, run8 );

	if( random() < 0.2 )
		sound( self, CHAN_VOICE, "soldier/idle.wav", 1, ATTN_IDLE );
}
void army_run2( gentity_t* self )
{
	static mframe_t frame         = { ai_run, 15, NULL };
	static mmove_t  move          = { run2, run2, &frame, army_run3 };
	self->monsterinfo.currentmove = &move;
}
void army_run3( gentity_t* self )
{
	static mframe_t frame         = { ai_run, 10, NULL };
	static mmove_t  move          = { run3, run3, &frame, army_run4 };
	self->monsterinfo.currentmove = &move;
}
void army_run4( gentity_t* self )
{
	static mframe_t frame         = { ai_run, 10, NULL };
	static mmove_t  move          = { run4, run4, &frame, army_run5 };
	self->monsterinfo.currentmove = &move;
}
void army_run5( gentity_t* self )
{
	static mframe_t frame         = { ai_run, 8, NULL };
	static mmove_t  move          = { run5, run5, &frame, army_run6 };
	self->monsterinfo.currentmove = &move;
}
void army_run6( gentity_t* self )
{
	static mframe_t frame         = { ai_run, 15, NULL };
	static mmove_t  move          = { run6, run6, &frame, army_run7 };
	self->monsterinfo.currentmove = &move;
}
void army_run7( gentity_t* self )
{
	static mframe_t frame         = { ai_run, 10, NULL };
	static mmove_t  move          = { run7, run7, &frame, army_run8 };
	self->monsterinfo.currentmove = &move;
}
void army_run8( gentity_t* self )
{
	static mframe_t frame         = { ai_run, 8, NULL };
	static mmove_t  move          = { run8, run8, &frame, army_run1 };
	self->monsterinfo.currentmove = &move;
}
void army_atk1( gentity_t* self )
{
	static mframe_t frame         = { ai_face, 0, NULL };
	static mmove_t  move          = { shoot1, shoot1, &frame, army_atk2 };
	self->monsterinfo.currentmove = &move;
	// Anim Start function
	G_SendAnimUpdate( self, anim_event_shoot, shoot1, shoot9 );
}
void army_atk2( gentity_t* self )
{
	static mframe_t frame         = { ai_face, 0, NULL };
	static mmove_t  move          = { shoot2, shoot2, &frame, army_atk3 };
	self->monsterinfo.currentmove = &move;
}
void army_atk3( gentity_t* self )
{
	static mframe_t frame         = { ai_face, 0, NULL };
	static mmove_t  move          = { shoot3, shoot3, &frame, army_atk4 };
	self->monsterinfo.currentmove = &move;
}
void army_atk4( gentity_t* self )
{
	static mframe_t frame         = { ai_face, 0, NULL };
	static mmove_t  move          = { shoot4, shoot4, &frame, army_atk5 };
	self->monsterinfo.currentmove = &move;
}
void army_atk5( gentity_t* self )
{
	static mframe_t frame         = { ai_face, 0, NULL };
	static mmove_t  move          = { shoot5, shoot5, &frame, army_atk6 };
	self->monsterinfo.currentmove = &move;
	army_fire( self );
}
void army_atk6( gentity_t* self )
{
	static mframe_t frame         = { ai_face, 0, NULL };
	static mmove_t  move          = { shoot6, shoot6, &frame, army_atk7 };
	self->monsterinfo.currentmove = &move;
}
void army_atk7( gentity_t* self )
{
	static mframe_t frame         = { ai_face, 0, NULL };
	static mmove_t  move          = { shoot7, shoot7, &frame, army_atk8 };
	self->monsterinfo.currentmove = &move;
}
void army_atk8( gentity_t* self )
{
	static mframe_t frame         = { ai_face, 0, NULL };
	static mmove_t  move          = { shoot8, shoot8, &frame, army_atk9 };
	self->monsterinfo.currentmove = &move;
}
void army_atk9( gentity_t* self )
{
	static mframe_t frame         = { ai_face, 0, NULL };
	static mmove_t  move          = { shoot9, shoot9, &frame, army_run1 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_pain1( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { pain1, pain1, &frame, army_pain2 };
	self->monsterinfo.currentmove = &move;
	// Anim Start function
	G_SendAnimUpdate( self, anim_event_pain, pain1, pain6 );
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_pain2( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { pain2, pain2, &frame, army_pain3 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_pain3( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { pain3, pain3, &frame, army_pain4 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_pain4( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { pain4, pain4, &frame, army_pain5 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_pain5( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { pain5, pain5, &frame, army_pain6 };
	self->monsterinfo.currentmove = &move;
}
void army_pain6( gentity_t* self )
{
	static mframe_t frame         = { ai_pain, 1, NULL };
	static mmove_t  move          = { pain6, pain6, &frame, army_run1 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painb1( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painb1, painb1, &frame, army_painb2 };
	self->monsterinfo.currentmove = &move;
	// Anim Start function
	G_SendAnimUpdate( self, anim_event_painb, painb1, painb14 );
}
void army_painb2( gentity_t* self )
{
	static mframe_t frame         = { ai_painforward, 13, NULL };
	static mmove_t  move          = { painb2, painb2, &frame, army_painb3 };
	self->monsterinfo.currentmove = &move;
}
void army_painb3( gentity_t* self )
{
	static mframe_t frame         = { ai_painforward, 9, NULL };
	static mmove_t  move          = { painb3, painb3, &frame, army_painb4 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painb4( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painb4, painb4, &frame, army_painb5 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painb5( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painb5, painb5, &frame, army_painb6 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painb6( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painb6, painb6, &frame, army_painb7 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painb7( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painb7, painb7, &frame, army_painb8 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painb8( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painb8, painb8, &frame, army_painb9 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painb9( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painb9, painb9, &frame, army_painb10 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painb10( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painb10, painb10, &frame, army_painb11 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painb11( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painb11, painb11, &frame, army_painb12 };
	self->monsterinfo.currentmove = &move;
}
void army_painb12( gentity_t* self )
{
	static mframe_t frame         = { ai_pain, 2, NULL };
	static mmove_t  move          = { painb12, painb12, &frame, army_painb13 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painb13( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painb13, painb13, &frame, army_painb14 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painb14( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painb14, painb14, &frame, army_run1 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painc1( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painc1, painc1, &frame, army_painc2 };
	self->monsterinfo.currentmove = &move;
	// Anim Start function
	G_SendAnimUpdate( self, anim_event_painc, painc1, painc13 );
}
void army_painc2( gentity_t* self )
{
	static mframe_t frame         = { ai_pain, 1, NULL };
	static mmove_t  move          = { painc2, painc2, &frame, army_painc3 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painc3( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painc3, painc3, &frame, army_painc4 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painc4( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painc4, painc4, &frame, army_painc5 };
	self->monsterinfo.currentmove = &move;
}
void army_painc5( gentity_t* self )
{
	static mframe_t frame         = { ai_painforward, 1, NULL };
	static mmove_t  move          = { painc5, painc5, &frame, army_painc6 };
	self->monsterinfo.currentmove = &move;
}
void army_painc6( gentity_t* self )
{
	static mframe_t frame         = { ai_painforward, 1, NULL };
	static mmove_t  move          = { painc6, painc6, &frame, army_painc7 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painc7( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painc7, painc7, &frame, army_painc8 };
	self->monsterinfo.currentmove = &move;
}
void army_painc8( gentity_t* self )
{
	static mframe_t frame         = { ai_pain, 1, NULL };
	static mmove_t  move          = { painc8, painc8, &frame, army_painc9 };
	self->monsterinfo.currentmove = &move;
}
void army_painc9( gentity_t* self )
{
	static mframe_t frame         = { ai_painforward, 4, NULL };
	static mmove_t  move          = { painc9, painc9, &frame, army_painc10 };
	self->monsterinfo.currentmove = &move;
}
void army_painc10( gentity_t* self )
{
	static mframe_t frame         = { ai_painforward, 3, NULL };
	static mmove_t  move          = { painc10, painc10, &frame, army_painc11 };
	self->monsterinfo.currentmove = &move;
}
void army_painc11( gentity_t* self )
{
	static mframe_t frame         = { ai_painforward, 6, NULL };
	static mmove_t  move          = { painc11, painc11, &frame, army_painc12 };
	self->monsterinfo.currentmove = &move;
}
void army_painc12( gentity_t* self )
{
	static mframe_t frame         = { ai_painforward, 8, NULL };
	static mmove_t  move          = { painc12, painc12, &frame, army_painc13 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_painc13( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { painc13, painc13, &frame, army_run1 };
	self->monsterinfo.currentmove = &move;
}
void army_pain( gentity_t* self )
{
	float r;

	if( self->pain_finished > level.time )
		return;

	r = random();

	if( r < 0.2 )
	{
		self->pain_finished = level.time + 0.6;
		army_pain1( self );
		sound( self, CHAN_VOICE, "soldier/pain1.wav", 1, ATTN_NORM );
	}
	else if( r < 0.6 )
	{
		self->pain_finished = level.time + 1.1;
		army_painb1( self );
		sound( self, CHAN_VOICE, "soldier/pain2.wav", 1, ATTN_NORM );
	}
	else
	{
		self->pain_finished = level.time + 1.1;
		army_painc1( self );
		sound( self, CHAN_VOICE, "soldier/pain2.wav", 1, ATTN_NORM );
	}
}
void army_fire( gentity_t* self )
{
	vec3_t     dir;
	gentity_t* en;

	sound( self, CHAN_WEAPON, "soldier/sattck1.wav", 1, ATTN_NORM );

	en = self->enemy;

	dir = en->r.currentOrigin - en->velocity * 0.2;
	dir = NormalizeQuakeC( dir - self->r.currentOrigin );

	FireBullets( self, 4, dir, idVec3_t( 0.1, 0.1, 0 ) );
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_die1( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { death1, death1, &frame, army_die2 };
	self->monsterinfo.currentmove = &move;
	// Anim Start function
	G_SendAnimUpdate( self, anim_event_death, death1, death10 );
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_die2( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { death2, death2, &frame, army_die3 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_die3( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { death3, death3, &frame, army_die4 };
	self->monsterinfo.currentmove = &move;
	self->r.contents              = 0;
	trap_LinkEntity( self );
	self->ammo_shells = 5;
	DropBackpack( self );
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_die4( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { death4, death4, &frame, army_die5 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_die5( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { death5, death5, &frame, army_die6 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_die6( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { death6, death6, &frame, army_die7 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_die7( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { death7, death7, &frame, army_die8 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_die8( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { death8, death8, &frame, army_die9 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_die9( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { death9, death9, &frame, army_die10 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_die10( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { death10, death10, &frame, army_die10 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_cdie1( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { deathc1, deathc1, &frame, army_cdie2 };
	self->monsterinfo.currentmove = &move;
	// Anim Start function
	G_SendAnimUpdate( self, anim_event_deathc, deathc1, deathc11 );
}
void army_cdie2( gentity_t* self )
{
	static mframe_t frame         = { ai_back, 5, NULL };
	static mmove_t  move          = { deathc2, deathc2, &frame, army_cdie3 };
	self->monsterinfo.currentmove = &move;
}
void army_cdie3( gentity_t* self )
{
	static mframe_t frame         = { ai_back, 4, NULL };
	static mmove_t  move          = { deathc3, deathc3, &frame, army_cdie4 };
	self->monsterinfo.currentmove = &move;
	self->r.contents              = 0;
	trap_LinkEntity( self );
	self->ammo_shells = 5;
	DropBackpack( self );
}
void army_cdie4( gentity_t* self )
{
	static mframe_t frame         = { ai_back, 13, NULL };
	static mmove_t  move          = { deathc4, deathc4, &frame, army_cdie5 };
	self->monsterinfo.currentmove = &move;
}
void army_cdie5( gentity_t* self )
{
	static mframe_t frame         = { ai_back, 3, NULL };
	static mmove_t  move          = { deathc5, deathc5, &frame, army_cdie6 };
	self->monsterinfo.currentmove = &move;
}
void army_cdie6( gentity_t* self )
{
	static mframe_t frame         = { ai_back, 4, NULL };
	static mmove_t  move          = { deathc6, deathc6, &frame, army_cdie7 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_cdie7( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { deathc7, deathc7, &frame, army_cdie8 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_cdie8( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { deathc8, deathc8, &frame, army_cdie9 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_cdie9( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { deathc9, deathc9, &frame, army_cdie10 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_cdie10( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { deathc10, deathc10, &frame, army_cdie11 };
	self->monsterinfo.currentmove = &move;
}
// WARNING: No AI state change specified, defaulting to ai_stand
void army_cdie11( gentity_t* self )
{
	static mframe_t frame         = { ai_stand, 0, NULL };
	static mmove_t  move          = { deathc11, deathc11, &frame, army_cdie11 };
	self->monsterinfo.currentmove = &move;
}
void army_die( gentity_t* self )
{
	if( self->health < -35 )
	{
		sound( self, CHAN_VOICE, "player/udeath.wav", 1, ATTN_NORM );
		SpawnGib( self );
		self->isGibbed = qtrue;
		return;
	}

	sound( self, CHAN_VOICE, "soldier/death1.wav", 1, ATTN_NORM );
	if( random() < 0.5 )
		army_die1( self );
	else
		army_cdie1( self );
}
void monster_army( gentity_t* self )
{
	precache_model( "models/monsters/soldier.md3" );
	precache_model( "progs/h_guard.mdl" );
	precache_model( "progs/gib1.mdl" );
	precache_model( "progs/gib2.mdl" );
	precache_model( "progs/gib3.mdl" );

	precache_sound( "soldier/death1.wav" );
	precache_sound( "soldier/idle.wav" );
	precache_sound( "soldier/pain1.wav" );
	precache_sound( "soldier/pain2.wav" );
	precache_sound( "soldier/sattck1.wav" );
	precache_sound( "soldier/sight1.wav" );

	precache_sound( "player/udeath.wav" );

	self->r.contents = CONTENTS_SOLID;
	trap_LinkEntity( self );

	self->movetype = MOVETYPE_STEP;

	setmodel( self, "models/monsters/soldier.md3" );

	setsize( self, idVec3_t( -16, -16, -24 ), idVec3_t( 16, 16, 40 ) );
	self->health = 30;

	self->monsterinfo.stand  = army_stand1;
	self->monsterinfo.walk   = army_walk1;
	self->monsterinfo.run    = army_run1;
	self->monsterinfo.attack = army_atk1;
	self->monsterinfo.pain   = army_pain;
	self->monsterinfo.die    = army_die;

	walkmonster_start( self );
}
