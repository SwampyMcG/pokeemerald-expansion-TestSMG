// Random-pool trainer speech, grouped by tone/personality archetype rather than
// by individual trainer. Adding or removing trainers (or even whole facility
// classes) never requires touching this file unless the new class doesn't fit
// any existing archetype - see sFacilityClassToSpeechArchetype below.
//
// Covers before-battle, win, and lose lines for every facility (Tower, Palace,
// Pike, Dome, Pyramid, Tent), all routed through CopyFrontierTrainerSpeech().
// Trainer Hill is intentionally not part of this system.

static const u8 sSpeech_Fallback[] = _("...");

static const u8 sSpeech_Cocky_Before1[] = _("Show me what you've got!");
static const u8 sSpeech_Cocky_Before2[] = _("I don't lose. Ever.");
static const u8 sSpeech_Cocky_Before3[] = _("Let's make this quick.");
static const u8 sSpeech_Cocky_Before4[] = _("Bring your best!");
static const u8 sSpeech_Cocky_Before5[] = _("I've been waiting for you.");
static const u8 sSpeech_Cocky_Win1[] = _("Too easy.");
static const u8 sSpeech_Cocky_Win2[] = _("Was that your best?");
static const u8 sSpeech_Cocky_Win3[] = _("Better luck next time.");
static const u8 sSpeech_Cocky_Win4[] = _("I told you so!");
static const u8 sSpeech_Cocky_Win5[] = _("Outclassed, as usual.");
static const u8 sSpeech_Cocky_Lose1[] = _("Impossible... impossible!");
static const u8 sSpeech_Cocky_Lose2[] = _("You got lucky this time.");
static const u8 sSpeech_Cocky_Lose3[] = _("I'll remember this.");
static const u8 sSpeech_Cocky_Lose4[] = _("Not bad, I guess.");
static const u8 sSpeech_Cocky_Lose5[] = _("Ugh, fine. You win.");

static const u8 sSpeech_Polite_Before1[] = _("Shall we begin?");
static const u8 sSpeech_Polite_Before2[] = _("I do hope you're ready.");
static const u8 sSpeech_Polite_Before3[] = _("A pleasure to battle you.");
static const u8 sSpeech_Polite_Before4[] = _("Let us see your skill.");
static const u8 sSpeech_Polite_Before5[] = _("After you, if you please.");
static const u8 sSpeech_Polite_Win1[] = _("Well fought, all the same.");
static const u8 sSpeech_Polite_Win2[] = _("A gentle victory, I'd say.");
static const u8 sSpeech_Polite_Win3[] = _("Splendid effort on your part.");
static const u8 sSpeech_Polite_Win4[] = _("Do try again sometime.");
static const u8 sSpeech_Polite_Win5[] = _("How delightful, I've won.");
static const u8 sSpeech_Polite_Lose1[] = _("Well played, truly.");
static const u8 sSpeech_Polite_Lose2[] = _("You have my respect.");
static const u8 sSpeech_Polite_Lose3[] = _("A fine battle indeed.");
static const u8 sSpeech_Polite_Lose4[] = _("I concede, graciously.");
static const u8 sSpeech_Polite_Lose5[] = _("Bravo. Simply bravo.");

static const u8 sSpeech_CheerfulKid_Before1[] = _("Betcha can't beat me!");
static const u8 sSpeech_CheerfulKid_Before2[] = _("This is gonna be fun!");
static const u8 sSpeech_CheerfulKid_Before3[] = _("Ready or not, here I come!");
static const u8 sSpeech_CheerfulKid_Before4[] = _("Let's play!");
static const u8 sSpeech_CheerfulKid_Before5[] = _("I've been practicing!");
static const u8 sSpeech_CheerfulKid_Win1[] = _("Yay, I won!");
static const u8 sSpeech_CheerfulKid_Win2[] = _("Ha, told ya!");
static const u8 sSpeech_CheerfulKid_Win3[] = _("That was awesome!");
static const u8 sSpeech_CheerfulKid_Win4[] = _("Wanna go again?");
static const u8 sSpeech_CheerfulKid_Win5[] = _("I'm getting stronger!");
static const u8 sSpeech_CheerfulKid_Lose1[] = _("Aw, no fair!");
static const u8 sSpeech_CheerfulKid_Lose2[] = _("You're really strong!");
static const u8 sSpeech_CheerfulKid_Lose3[] = _("I'll win next time!");
static const u8 sSpeech_CheerfulKid_Lose4[] = _("That was close, right?");
static const u8 sSpeech_CheerfulKid_Lose5[] = _("Okay, okay, you got me.");

static const u8 sSpeech_Outdoorsy_Before1[] = _("Grab your gear, let's go!");
static const u8 sSpeech_Outdoorsy_Before2[] = _("Nice day for a battle!");
static const u8 sSpeech_Outdoorsy_Before3[] = _("Pull up a log and battle!");
static const u8 sSpeech_Outdoorsy_Before4[] = _("Fresh air, fresh fight!");
static const u8 sSpeech_Outdoorsy_Before5[] = _("Care to join the campfire crew?");
static const u8 sSpeech_Outdoorsy_Win1[] = _("Just like roasting marshmallows!");
static const u8 sSpeech_Outdoorsy_Win2[] = _("Victory tastes sweet out here!");
static const u8 sSpeech_Outdoorsy_Win3[] = _("Another campfire tale for later!");
static const u8 sSpeech_Outdoorsy_Win4[] = _("Nature's on my side today!");
static const u8 sSpeech_Outdoorsy_Win5[] = _("That's how we do it outdoors!");
static const u8 sSpeech_Outdoorsy_Lose1[] = _("Well, back to setting up camp.");
static const u8 sSpeech_Outdoorsy_Lose2[] = _("You out-hiked me there.");
static const u8 sSpeech_Outdoorsy_Lose3[] = _("Guess I'll stew on this one.");
static const u8 sSpeech_Outdoorsy_Lose4[] = _("Color me impressed!");
static const u8 sSpeech_Outdoorsy_Lose5[] = _("Round's on you tonight.");

static const u8 sSpeech_Earthy_Before1[] = _("Let's dig into this!");
static const u8 sSpeech_Earthy_Before2[] = _("I've unearthed some strong ones.");
static const u8 sSpeech_Earthy_Before3[] = _("Time to rock and roll!");
static const u8 sSpeech_Earthy_Before4[] = _("Care for a rugged challenge?");
static const u8 sSpeech_Earthy_Before5[] = _("Let's see what you're made of.");
static const u8 sSpeech_Earthy_Win1[] = _("Solid as bedrock, that win.");
static const u8 sSpeech_Earthy_Win2[] = _("Told you I don't crack easy.");
static const u8 sSpeech_Earthy_Win3[] = _("Another gem for my collection.");
static const u8 sSpeech_Earthy_Win4[] = _("That's how it's done, greenhorn.");
static const u8 sSpeech_Earthy_Win5[] = _("Buried you good, didn't I?");
static const u8 sSpeech_Earthy_Lose1[] = _("Cracked me right open.");
static const u8 sSpeech_Earthy_Lose2[] = _("You struck a vein of skill there.");
static const u8 sSpeech_Earthy_Lose3[] = _("Well, I'll be fossilized.");
static const u8 sSpeech_Earthy_Lose4[] = _("That one's a real gem, kid.");
static const u8 sSpeech_Earthy_Lose5[] = _("Guess I'm just a pebble to you.");

static const u8 sSpeech_Sporty_Before1[] = _("Let's turn up the pace!");
static const u8 sSpeech_Sporty_Before2[] = _("Hope you can keep up!");
static const u8 sSpeech_Sporty_Before3[] = _("Race you to the finish!");
static const u8 sSpeech_Sporty_Before4[] = _("Time to make a splash!");
static const u8 sSpeech_Sporty_Before5[] = _("Warmed up and ready!");
static const u8 sSpeech_Sporty_Win1[] = _("First place, as always!");
static const u8 sSpeech_Sporty_Win2[] = _("Never even broke a sweat!");
static const u8 sSpeech_Sporty_Win3[] = _("That's a personal best!");
static const u8 sSpeech_Sporty_Win4[] = _("Try to keep pace next time!");
static const u8 sSpeech_Sporty_Win5[] = _("Victory lap, here I come!");
static const u8 sSpeech_Sporty_Lose1[] = _("You beat me to the finish.");
static const u8 sSpeech_Sporty_Lose2[] = _("Guess I need more training.");
static const u8 sSpeech_Sporty_Lose3[] = _("Caught me off my stride.");
static const u8 sSpeech_Sporty_Lose4[] = _("That's a tough one to swallow.");
static const u8 sSpeech_Sporty_Lose5[] = _("You've got real endurance!");

static const u8 sSpeech_Mystic_Before1[] = _("I foresaw this meeting...");
static const u8 sSpeech_Mystic_Before2[] = _("The stars favor me today.");
static const u8 sSpeech_Mystic_Before3[] = _("Can you handle the unknown?");
static const u8 sSpeech_Mystic_Before4[] = _("Let's peer into your fate.");
static const u8 sSpeech_Mystic_Before5[] = _("Reality bends to my will.");
static const u8 sSpeech_Mystic_Win1[] = _("Exactly as I foresaw.");
static const u8 sSpeech_Mystic_Win2[] = _("Fate is rarely wrong.");
static const u8 sSpeech_Mystic_Win3[] = _("The unknown obeys me.");
static const u8 sSpeech_Mystic_Win4[] = _("Your future was already written.");
static const u8 sSpeech_Mystic_Win5[] = _("I saw this coming, of course.");
static const u8 sSpeech_Mystic_Lose1[] = _("This wasn't foretold...");
static const u8 sSpeech_Mystic_Lose2[] = _("The stars deceived me.");
static const u8 sSpeech_Mystic_Lose3[] = _("Even I couldn't see this.");
static const u8 sSpeech_Mystic_Lose4[] = _("My visions failed me this time.");
static const u8 sSpeech_Mystic_Lose5[] = _("A surprising twist of fate.");

static const u8 sSpeech_Artsy_Before1[] = _("Let's make some noise!");
static const u8 sSpeech_Artsy_Before2[] = _("Time for a showstopper!");
static const u8 sSpeech_Artsy_Before3[] = _("This'll be a work of art.");
static const u8 sSpeech_Artsy_Before4[] = _("Care for an encore challenge?");
static const u8 sSpeech_Artsy_Before5[] = _("Let the performance begin!");
static const u8 sSpeech_Artsy_Win1[] = _("Standing ovation for me!");
static const u8 sSpeech_Artsy_Win2[] = _("That performance was flawless!");
static const u8 sSpeech_Artsy_Win3[] = _("Encore! Encore!");
static const u8 sSpeech_Artsy_Win4[] = _("A masterpiece of a battle!");
static const u8 sSpeech_Artsy_Win5[] = _("Curtain call, victory's mine!");
static const u8 sSpeech_Artsy_Lose1[] = _("Well, that was a flop.");
static const u8 sSpeech_Artsy_Lose2[] = _("You stole the spotlight there.");
static const u8 sSpeech_Artsy_Lose3[] = _("Guess I'll rewrite this act.");
static const u8 sSpeech_Artsy_Lose4[] = _("Even artists have off days.");
static const u8 sSpeech_Artsy_Lose5[] = _("Bravo, you upstaged me.");

static const u8 sSpeech_Caring_Before1[] = _("Let's have a fair fight, okay?");
static const u8 sSpeech_Caring_Before2[] = _("I'll go easy... maybe!");
static const u8 sSpeech_Caring_Before3[] = _("My Pokemon and I are ready.");
static const u8 sSpeech_Caring_Before4[] = _("Let's enjoy this together!");
static const u8 sSpeech_Caring_Before5[] = _("Here's hoping for a good match!");
static const u8 sSpeech_Caring_Win1[] = _("We make a great team!");
static const u8 sSpeech_Caring_Win2[] = _("My Pokemon did wonderfully!");
static const u8 sSpeech_Caring_Win3[] = _("Thanks for the good match!");
static const u8 sSpeech_Caring_Win4[] = _("We grew stronger together!");
static const u8 sSpeech_Caring_Win5[] = _("What a heartfelt battle!");
static const u8 sSpeech_Caring_Lose1[] = _("You and your Pokemon did great!");
static const u8 sSpeech_Caring_Lose2[] = _("I'm proud of my team anyway.");
static const u8 sSpeech_Caring_Lose3[] = _("What a wonderful battle!");
static const u8 sSpeech_Caring_Lose4[] = _("We'll train harder together.");
static const u8 sSpeech_Caring_Lose5[] = _("Thanks for being gentle with us!");

static const u8 sSpeech_BoldFlyer_Before1[] = _("Ready to take flight?");
static const u8 sSpeech_BoldFlyer_Before2[] = _("Let's soar into battle!");
static const u8 sSpeech_BoldFlyer_Before3[] = _("I've got a bird's-eye view.");
static const u8 sSpeech_BoldFlyer_Before4[] = _("Spread your wings, if you dare!");
static const u8 sSpeech_BoldFlyer_Before5[] = _("Up here, I always win!");
static const u8 sSpeech_BoldFlyer_Win1[] = _("Soaring to victory, as always!");
static const u8 sSpeech_BoldFlyer_Win2[] = _("You never stood a chance up here!");
static const u8 sSpeech_BoldFlyer_Win3[] = _("That's how eagles do it!");
static const u8 sSpeech_BoldFlyer_Win4[] = _("Flying high after that win!");
static const u8 sSpeech_BoldFlyer_Win5[] = _("Nothing beats the view from the top!");
static const u8 sSpeech_BoldFlyer_Lose1[] = _("Grounded... just like that.");
static const u8 sSpeech_BoldFlyer_Lose2[] = _("You clipped my wings there.");
static const u8 sSpeech_BoldFlyer_Lose3[] = _("Flew too close to defeat, huh.");
static const u8 sSpeech_BoldFlyer_Lose4[] = _("A humbling descent, that was.");
static const u8 sSpeech_BoldFlyer_Lose5[] = _("Well, even birds fall sometimes.");

static const u8 sSpeech_Brock_Before1[] = _("I'm Brock, the Pewter City Gym Leader!");
static const u8 sSpeech_Brock_Before2[] = _("My rock-hard resolve is my strength!");
static const u8 sSpeech_Brock_Before3[] = _("I make the best Pokemon breeder around!");
static const u8 sSpeech_Brock_Before4[] = _("Let's see if you can crack my defense!");
static const u8 sSpeech_Brock_Before5[] = _("A true leader never backs down from a challenge!");
static const u8 sSpeech_Brock_Win1[] = _("A Gym Leader never crumbles that easily!");
static const u8 sSpeech_Brock_Win2[] = _("Rock solid, just like I promised!");
static const u8 sSpeech_Brock_Win3[] = _("Keep training, and come challenge me again!");
static const u8 sSpeech_Brock_Win4[] = _("That's the power of Pewter City!");
static const u8 sSpeech_Brock_Win5[] = _("My Pokemon and I make quite the team!");
static const u8 sSpeech_Brock_Lose1[] = _("You've cracked my defenses wide open!");
static const u8 sSpeech_Brock_Lose2[] = _("A fine battle! You'd make a great breeder.");
static const u8 sSpeech_Brock_Lose3[] = _("I see real Gym Leader potential in you!");
static const u8 sSpeech_Brock_Lose4[] = _("Well fought! I'll go polish some rocks.");
static const u8 sSpeech_Brock_Lose5[] = _("You've earned my respect, trainer!");

static const u8 sSpeech_Misty_Before1[] = _("I'm Misty, the Cerulean Gym Leader!");
static const u8 sSpeech_Misty_Before2[] = _("My Water Pokemon are the cutest AND the strongest!");
static const u8 sSpeech_Misty_Before3[] = _("Hope you brought an umbrella!");
static const u8 sSpeech_Misty_Before4[] = _("I'll show you a real splash of talent!");
static const u8 sSpeech_Misty_Before5[] = _("No running away once we start!");
static const u8 sSpeech_Misty_Win1[] = _("Ha! Told you Water types rule!");
static const u8 sSpeech_Misty_Win2[] = _("That's how a Gym Leader battles!");
static const u8 sSpeech_Misty_Win3[] = _("Better luck next time, okay?");
static const u8 sSpeech_Misty_Win4[] = _("My Pokemon and I make a great splash!");
static const u8 sSpeech_Misty_Win5[] = _("Tantrum averted, victory secured!");
static const u8 sSpeech_Misty_Lose1[] = _("Wh-what?! No way!");
static const u8 sSpeech_Misty_Lose2[] = _("You actually beat me... unbelievable!");
static const u8 sSpeech_Misty_Lose3[] = _("Fine, fine, you win this round!");
static const u8 sSpeech_Misty_Lose4[] = _("I'm not crying, it's just pool water!");
static const u8 sSpeech_Misty_Lose5[] = _("You'd make a fine Gym Leader yourself!");

static const u8 sSpeech_LtSurge_Before1[] = _("I'm Lt. Surge, the Lightning American!");
static const u8 sSpeech_LtSurge_Before2[] = _("My Electric Pokemon saved me in a war, kid!");
static const u8 sSpeech_LtSurge_Before3[] = _("Time to feel some real voltage!");
static const u8 sSpeech_LtSurge_Before4[] = _("Hope you like getting shocked!");
static const u8 sSpeech_LtSurge_Before5[] = _("Let's see if you can keep up the charge!");
static const u8 sSpeech_LtSurge_Win1[] = _("Ha! Overloaded, soldier!");
static const u8 sSpeech_LtSurge_Win2[] = _("That's the power of lightning speed!");
static const u8 sSpeech_LtSurge_Win3[] = _("Nice try, but I'm always electrifying!");
static const u8 sSpeech_LtSurge_Win4[] = _("Come back when you've got more voltage!");
static const u8 sSpeech_LtSurge_Win5[] = _("Victory, plain and simple!");
static const u8 sSpeech_LtSurge_Lose1[] = _("Ha! You've got real spark, kid!");
static const u8 sSpeech_LtSurge_Lose2[] = _("Shocking! You actually beat me!");
static const u8 sSpeech_LtSurge_Lose3[] = _("Circuit's fried, you win this one!");
static const u8 sSpeech_LtSurge_Lose4[] = _("That's a battle worth remembering!");
static const u8 sSpeech_LtSurge_Lose5[] = _("You'd survive in the field, soldier!");

static const u8 sSpeech_Erika_Before1[] = _("I am Erika, the Celadon Gym Leader.");
static const u8 sSpeech_Erika_Before2[] = _("Let us have a peaceful, fragrant battle.");
static const u8 sSpeech_Erika_Before3[] = _("My Grass Pokemon bloom beautifully in combat.");
static const u8 sSpeech_Erika_Before4[] = _("Oh my, shall we begin?");
static const u8 sSpeech_Erika_Before5[] = _("I do hope this battle is a pleasant one.");
static const u8 sSpeech_Erika_Win1[] = _("How lovely, a well-earned victory.");
static const u8 sSpeech_Erika_Win2[] = _("My Pokemon bloomed brilliantly, did they not?");
static const u8 sSpeech_Erika_Win3[] = _("Oh my, was that too much for you?");
static const u8 sSpeech_Erika_Win4[] = _("A graceful win, I should think.");
static const u8 sSpeech_Erika_Win5[] = _("Do visit my shop sometime, won't you?");
static const u8 sSpeech_Erika_Lose1[] = _("Oh my! However did you manage that?");
static const u8 sSpeech_Erika_Lose2[] = _("A truly wonderful battle, thank you.");
static const u8 sSpeech_Erika_Lose3[] = _("My flowers have wilted for today, it seems.");
static const u8 sSpeech_Erika_Lose4[] = _("How refreshing to be surprised like this.");
static const u8 sSpeech_Erika_Lose5[] = _("You have my utmost admiration.");

static const u8 sSpeech_Koga_Before1[] = _("I am Koga, master of Fuchsia Gym.");
static const u8 sSpeech_Koga_Before2[] = _("Prepare yourself. A ninja strikes without warning.");
static const u8 sSpeech_Koga_Before3[] = _("My poison techniques have no equal.");
static const u8 sSpeech_Koga_Before4[] = _("Few survive my toxic strategies. Let's begin.");
static const u8 sSpeech_Koga_Before5[] = _("Silence. The battle starts now.");
static const u8 sSpeech_Koga_Win1[] = _("As expected. Poison always finds a way.");
static const u8 sSpeech_Koga_Win2[] = _("You underestimated a ninja's resolve.");
static const u8 sSpeech_Koga_Win3[] = _("Train harder before you face me again.");
static const u8 sSpeech_Koga_Win4[] = _("Victory achieved without a wasted motion.");
static const u8 sSpeech_Koga_Win5[] = _("A true ninja never truly loses.");
static const u8 sSpeech_Koga_Lose1[] = _("Impossible... my technique, undone!");
static const u8 sSpeech_Koga_Lose2[] = _("You've pierced through my defenses.");
static const u8 sSpeech_Koga_Lose3[] = _("A worthy opponent. I acknowledge your skill.");
static const u8 sSpeech_Koga_Lose4[] = _("Even a ninja must accept defeat gracefully.");
static const u8 sSpeech_Koga_Lose5[] = _("You've earned the respect of Fuchsia Gym.");

static const u8 sSpeech_Sabrina_Before1[] = _("I am Sabrina. I foresaw your arrival.");
static const u8 sSpeech_Sabrina_Before2[] = _("Your future holds this battle. Let's see it through.");
static const u8 sSpeech_Sabrina_Before3[] = _("My psychic power sees through everything.");
static const u8 sSpeech_Sabrina_Before4[] = _("Resistance is... an interesting choice.");
static const u8 sSpeech_Sabrina_Before5[] = _("Let us begin. I already know how this ends.");
static const u8 sSpeech_Sabrina_Win1[] = _("Precisely as I foresaw.");
static const u8 sSpeech_Sabrina_Win2[] = _("Your mind was an open book.");
static const u8 sSpeech_Sabrina_Win3[] = _("The future does not lie.");
static const u8 sSpeech_Sabrina_Win4[] = _("Nothing escapes my sight.");
static const u8 sSpeech_Sabrina_Win5[] = _("A predictable, if respectable, effort.");
static const u8 sSpeech_Sabrina_Lose1[] = _("This... I did not foresee.");
static const u8 sSpeech_Sabrina_Lose2[] = _("My visions failed me, it seems.");
static const u8 sSpeech_Sabrina_Lose3[] = _("An unexpected future unfolds before me.");
static const u8 sSpeech_Sabrina_Lose4[] = _("Impressive. Even I did not see this coming.");
static const u8 sSpeech_Sabrina_Lose5[] = _("You have earned my genuine respect.");

static const u8 sSpeech_Roxanne_Before1[] = _("I'm Roxanne, the Rustboro Gym Leader.");
static const u8 sSpeech_Roxanne_Before2[] = _("I study very hard to be a good leader!");
static const u8 sSpeech_Roxanne_Before3[] = _("Rock-solid theory backs up my battling!");
static const u8 sSpeech_Roxanne_Before4[] = _("I hope you're ready to be schooled!");
static const u8 sSpeech_Roxanne_Before5[] = _("Let's see if you've done your studying!");
static const u8 sSpeech_Roxanne_Win1[] = _("Just as the textbooks predicted!");
static const u8 sSpeech_Roxanne_Win2[] = _("A solid, well-studied victory!");
static const u8 sSpeech_Roxanne_Win3[] = _("Keep studying, and you'll improve!");
static const u8 sSpeech_Roxanne_Win4[] = _("Rock-hard determination pays off!");
static const u8 sSpeech_Roxanne_Win5[] = _("I won't crumble that easily!");
static const u8 sSpeech_Roxanne_Lose1[] = _("Oh no, my calculations were wrong!");
static const u8 sSpeech_Roxanne_Lose2[] = _("I need to study a lot more, it seems.");
static const u8 sSpeech_Roxanne_Lose3[] = _("A truly well-battled victory on your part!");
static const u8 sSpeech_Roxanne_Lose4[] = _("You'd make an excellent Gym Leader!");
static const u8 sSpeech_Roxanne_Lose5[] = _("Back to the books for me, I suppose.");

static const u8 sSpeech_Brawly_Before1[] = _("Yo, I'm Brawly, the Dewford Gym Leader!");
static const u8 sSpeech_Brawly_Before2[] = _("Ready to ride this wave of a battle?");
static const u8 sSpeech_Brawly_Before3[] = _("My Fighting types hit like a big swell!");
static const u8 sSpeech_Brawly_Before4[] = _("Let's have a totally awesome battle!");
static const u8 sSpeech_Brawly_Before5[] = _("Time to test your mettle, dude!");
static const u8 sSpeech_Brawly_Win1[] = _("Rode that wave straight to victory!");
static const u8 sSpeech_Brawly_Win2[] = _("Gnarly battle, but I came out on top!");
static const u8 sSpeech_Brawly_Win3[] = _("That's how we battle on Dewford!");
static const u8 sSpeech_Brawly_Win4[] = _("Totally solid technique, if I say so myself!");
static const u8 sSpeech_Brawly_Win5[] = _("Catch me riding this victory high!");
static const u8 sSpeech_Brawly_Lose1[] = _("Whoa, wiped out by that battle!");
static const u8 sSpeech_Brawly_Lose2[] = _("You've got some serious technique!");
static const u8 sSpeech_Brawly_Lose3[] = _("That wave of an attack got me good!");
static const u8 sSpeech_Brawly_Lose4[] = _("Totally gnarly battling, seriously!");
static const u8 sSpeech_Brawly_Lose5[] = _("Guess I'll paddle back out and train more!");

static const u8 sSpeech_Wattson_Before1[] = _("Wahaha! I'm Wattson, Mauville's Leader!");
static const u8 sSpeech_Wattson_Before2[] = _("Hope you're charged up for this, wahaha!");
static const u8 sSpeech_Wattson_Before3[] = _("My Electric Pokemon never run out of juice!");
static const u8 sSpeech_Wattson_Before4[] = _("Let's generate some real excitement!");
static const u8 sSpeech_Wattson_Before5[] = _("Time to shock you with my skills, wahaha!");
static const u8 sSpeech_Wattson_Win1[] = _("Wahaha! Shocking, isn't it?");
static const u8 sSpeech_Wattson_Win2[] = _("That's some electrifying battling, wahaha!");
static const u8 sSpeech_Wattson_Win3[] = _("Fully charged and ready for more, wahaha!");
static const u8 sSpeech_Wattson_Win4[] = _("Told you I never run low on power!");
static const u8 sSpeech_Wattson_Win5[] = _("Another spark of victory, wahaha!");
static const u8 sSpeech_Wattson_Lose1[] = _("Wahaha! Well, I'm plumb out of power!");
static const u8 sSpeech_Wattson_Lose2[] = _("You really shocked me with that one!");
static const u8 sSpeech_Wattson_Lose3[] = _("Ahh, my circuits are fried, wahaha!");
static const u8 sSpeech_Wattson_Lose4[] = _("A truly electrifying battle, my friend!");
static const u8 sSpeech_Wattson_Lose5[] = _("Guess this old man needs a recharge!");

static const u8 sSpeech_Flannery_Before1[] = _("I'm Flannery, Lavaridge's Gym Leader!");
static const u8 sSpeech_Flannery_Before2[] = _("I'll show you my Fire Pokemon's passion!");
static const u8 sSpeech_Flannery_Before3[] = _("My grandfather taught me to battle hot!");
static const u8 sSpeech_Flannery_Before4[] = _("Let's turn up the heat in here!");
static const u8 sSpeech_Flannery_Before5[] = _("I won't hold back, so don't you either!");
static const u8 sSpeech_Flannery_Win1[] = _("Burning with confidence after that win!");
static const u8 sSpeech_Flannery_Win2[] = _("That's the heat of Lavaridge for you!");
static const u8 sSpeech_Flannery_Win3[] = _("My passion carried me to victory!");
static const u8 sSpeech_Flannery_Win4[] = _("Told you I wouldn't hold back!");
static const u8 sSpeech_Flannery_Win5[] = _("Hah! Still got some fire left in me!");
static const u8 sSpeech_Flannery_Lose1[] = _("Ngh! You really turned up the heat!");
static const u8 sSpeech_Flannery_Lose2[] = _("Guess my passion wasn't quite enough!");
static const u8 sSpeech_Flannery_Lose3[] = _("You battled with real fire in you!");
static const u8 sSpeech_Flannery_Lose4[] = _("I've still got a lot to learn, huh?");
static const u8 sSpeech_Flannery_Lose5[] = _("Well fought! You've earned my respect!");

static const u8 sSpeech_Norman_Before1[] = _("I'm Norman, the Petalburg Gym Leader.");
static const u8 sSpeech_Norman_Before2[] = _("As a Gym Leader, I won't go easy on you.");
static const u8 sSpeech_Norman_Before3[] = _("Let's see the strength you've built.");
static const u8 sSpeech_Norman_Before4[] = _("A serious battle calls for serious effort.");
static const u8 sSpeech_Norman_Before5[] = _("Show me what you and your Pokemon can do.");
static const u8 sSpeech_Norman_Win1[] = _("A Gym Leader's experience shows.");
static const u8 sSpeech_Norman_Win2[] = _("Solid effort, but not solid enough.");
static const u8 sSpeech_Norman_Win3[] = _("Keep training, and you'll get there.");
static const u8 sSpeech_Norman_Win4[] = _("That's the strength I expect to see.");
static const u8 sSpeech_Norman_Win5[] = _("A well-earned victory, if I say so.");
static const u8 sSpeech_Norman_Lose1[] = _("Well done. That was a fine battle.");
static const u8 sSpeech_Norman_Lose2[] = _("You've grown stronger, I can tell.");
static const u8 sSpeech_Norman_Lose3[] = _("A proud loss, if there's such a thing.");
static const u8 sSpeech_Norman_Lose4[] = _("You battled with real determination.");
static const u8 sSpeech_Norman_Lose5[] = _("I look forward to seeing you grow further.");

static const u8 sSpeech_Winona_Before1[] = _("I am Winona, the Fortree Gym Leader.");
static const u8 sSpeech_Winona_Before2[] = _("My Flying types soar higher than any other.");
static const u8 sSpeech_Winona_Before3[] = _("Let us take to the skies in battle.");
static const u8 sSpeech_Winona_Before4[] = _("Grace and strength go together, you know.");
static const u8 sSpeech_Winona_Before5[] = _("Shall we begin this elegant contest?");
static const u8 sSpeech_Winona_Win1[] = _("A graceful victory, as always.");
static const u8 sSpeech_Winona_Win2[] = _("We soared above the competition!");
static const u8 sSpeech_Winona_Win3[] = _("Elegance and strength, hand in hand.");
static const u8 sSpeech_Winona_Win4[] = _("My Pokemon flew beautifully, did they not?");
static const u8 sSpeech_Winona_Win5[] = _("Victory suits us rather well.");
static const u8 sSpeech_Winona_Lose1[] = _("My wings have been clipped, it seems.");
static const u8 sSpeech_Winona_Lose2[] = _("A truly graceful battle on your part.");
static const u8 sSpeech_Winona_Lose3[] = _("You've soared past my expectations.");
static const u8 sSpeech_Winona_Lose4[] = _("Even birds must land sometime, I suppose.");
static const u8 sSpeech_Winona_Lose5[] = _("A humbling, if beautiful, defeat.");

static const u8 sSpeech_Juan_Before1[] = _("I am Juan, the Sootopolis Gym Leader.");
static const u8 sSpeech_Juan_Before2[] = _("Allow me to show you the art of Water types.");
static const u8 sSpeech_Juan_Before3[] = _("A battle should be as beautiful as the sea.");
static const u8 sSpeech_Juan_Before4[] = _("Let us paint a masterpiece of a battle.");
static const u8 sSpeech_Juan_Before5[] = _("Prepare yourself for elegance in motion.");
static const u8 sSpeech_Juan_Win1[] = _("A masterpiece of a victory, magnifique!");
static const u8 sSpeech_Juan_Win2[] = _("The sea itself favors my Pokemon today.");
static const u8 sSpeech_Juan_Win3[] = _("Beauty and strength, in perfect harmony.");
static const u8 sSpeech_Juan_Win4[] = _("Just as elegant as I had envisioned!");
static const u8 sSpeech_Juan_Win5[] = _("A flawless performance, if I say so.");
static const u8 sSpeech_Juan_Lose1[] = _("Magnifique! A truly beautiful battle!");
static const u8 sSpeech_Juan_Lose2[] = _("You have painted a masterpiece today.");
static const u8 sSpeech_Juan_Lose3[] = _("Even the sea bows to your skill.");
static const u8 sSpeech_Juan_Lose4[] = _("A defeat as elegant as any victory.");
static const u8 sSpeech_Juan_Lose5[] = _("Bravo! Simply a wonderful performance.");

static const u8 sSpeech_Lorelei_Before1[] = _("I'm Lorelei of the Elite Four.");
static const u8 sSpeech_Lorelei_Before2[] = _("My icy tactics will freeze you solid.");
static const u8 sSpeech_Lorelei_Before3[] = _("No one melts my composure in battle.");
static const u8 sSpeech_Lorelei_Before4[] = _("Let's see how you handle the cold.");
static const u8 sSpeech_Lorelei_Before5[] = _("I've analyzed a thousand trainers like you.");
static const u8 sSpeech_Lorelei_Win1[] = _("Frozen in place, just as planned.");
static const u8 sSpeech_Lorelei_Win2[] = _("Cool, calculated, and victorious.");
static const u8 sSpeech_Lorelei_Win3[] = _("You'll need more than heat to beat me.");
static const u8 sSpeech_Lorelei_Win4[] = _("Precision always wins in the end.");
static const u8 sSpeech_Lorelei_Win5[] = _("A flawless outcome, as expected.");
static const u8 sSpeech_Lorelei_Lose1[] = _("My composure... it's finally cracked.");
static const u8 sSpeech_Lorelei_Lose2[] = _("You melted right through my defenses.");
static const u8 sSpeech_Lorelei_Lose3[] = _("An unpredicted variable. You.");
static const u8 sSpeech_Lorelei_Lose4[] = _("I'll recalculate for our next battle.");
static const u8 sSpeech_Lorelei_Lose5[] = _("Impressive. Truly Elite Four material.");

static const u8 sSpeech_Bruno_Before1[] = _("I'm Bruno! Strength is everything!");
static const u8 sSpeech_Bruno_Before2[] = _("I trained under waterfalls for this!");
static const u8 sSpeech_Bruno_Before3[] = _("Muscle and Fighting types never lose!");
static const u8 sSpeech_Bruno_Before4[] = _("Let's see if you can take a hit!");
static const u8 sSpeech_Bruno_Before5[] = _("No fancy tricks, just raw power!");
static const u8 sSpeech_Bruno_Win1[] = _("Ha! Power always wins out!");
static const u8 sSpeech_Bruno_Win2[] = _("That's what training does for you!");
static const u8 sSpeech_Bruno_Win3[] = _("Come back when you're tougher!");
static const u8 sSpeech_Bruno_Win4[] = _("Rock solid victory, just like me!");
static const u8 sSpeech_Bruno_Win5[] = _("Not even a scratch on this old body!");
static const u8 sSpeech_Bruno_Lose1[] = _("Gah! Beaten by raw skill!");
static const u8 sSpeech_Bruno_Lose2[] = _("You hit harder than a waterfall!");
static const u8 sSpeech_Bruno_Lose3[] = _("Now that's the strength I respect!");
static const u8 sSpeech_Bruno_Lose4[] = _("Back to training for me, it seems!");
static const u8 sSpeech_Bruno_Lose5[] = _("You've got the muscle of a champion!");

static const u8 sSpeech_Agatha_Before1[] = _("I'm Agatha. Don't waste my time, dearie.");
static const u8 sSpeech_Agatha_Before2[] = _("Ghost types are the true art of battling.");
static const u8 sSpeech_Agatha_Before3[] = _("I've been at this since before you were born.");
static const u8 sSpeech_Agatha_Before4[] = _("Youngsters these days, no patience at all.");
static const u8 sSpeech_Agatha_Before5[] = _("Let's get this over with, shall we?");
static const u8 sSpeech_Agatha_Win1[] = _("Hah! Kids never learn.");
static const u8 sSpeech_Agatha_Win2[] = _("Experience beats energy every time.");
static const u8 sSpeech_Agatha_Win3[] = _("Go on home and train some more, dearie.");
static const u8 sSpeech_Agatha_Win4[] = _("Old bones, sharp mind. That's the secret.");
static const u8 sSpeech_Agatha_Win5[] = _("Not bad, but not good enough either.");
static const u8 sSpeech_Agatha_Lose1[] = _("Well, I'll be! Beaten by a whippersnapper!");
static const u8 sSpeech_Agatha_Lose2[] = _("Hoh! Haven't lost like that in ages.");
static const u8 sSpeech_Agatha_Lose3[] = _("Fine spirit you've got, dearie.");
static const u8 sSpeech_Agatha_Lose4[] = _("You'll go far, mark my words.");
static const u8 sSpeech_Agatha_Lose5[] = _("A rare loss, and a memorable one.");

static const u8 sSpeech_Lance_Before1[] = _("I'm Lance, Champion of the Dragons.");
static const u8 sSpeech_Lance_Before2[] = _("Dragon types are nearly unrivaled in power.");
static const u8 sSpeech_Lance_Before3[] = _("I've soared through countless battles.");
static const u8 sSpeech_Lance_Before4[] = _("Show me the strength worthy of a challenge.");
static const u8 sSpeech_Lance_Before5[] = _("Let's take to the skies together.");
static const u8 sSpeech_Lance_Win1[] = _("The sky belongs to the strong.");
static const u8 sSpeech_Lance_Win2[] = _("A Champion's power, on full display.");
static const u8 sSpeech_Lance_Win3[] = _("Train harder, and challenge me again.");
static const u8 sSpeech_Lance_Win4[] = _("Dragons bow to no one, it seems.");
static const u8 sSpeech_Lance_Win5[] = _("A commanding victory, as always.");
static const u8 sSpeech_Lance_Lose1[] = _("Incredible! You've grounded a dragon!");
static const u8 sSpeech_Lance_Lose2[] = _("A power that rivals my own. Remarkable.");
static const u8 sSpeech_Lance_Lose3[] = _("You've earned true Champion respect.");
static const u8 sSpeech_Lance_Lose4[] = _("The skies favor you today, it seems.");
static const u8 sSpeech_Lance_Lose5[] = _("A battle worthy of legend, that was.");

static const u8 sSpeech_Roark_Before1[] = _("I'm Roark, the Oreburgh Gym Leader!");
static const u8 sSpeech_Roark_Before2[] = _("My Rock types are as tough as fossils!");
static const u8 sSpeech_Roark_Before3[] = _("Digging deep is how I train, you know!");
static const u8 sSpeech_Roark_Before4[] = _("Let's see if you can crack my defense!");
static const u8 sSpeech_Roark_Before5[] = _("A Gym Leader's duty is to test your mettle!");
static const u8 sSpeech_Roark_Win1[] = _("Solid as bedrock, that victory!");
static const u8 sSpeech_Roark_Win2[] = _("My Pokemon are tougher than they look!");
static const u8 sSpeech_Roark_Win3[] = _("Keep digging, you'll strike gold eventually!");
static const u8 sSpeech_Roark_Win4[] = _("That's the strength of Oreburgh for you!");
static const u8 sSpeech_Roark_Win5[] = _("A win worth putting in my collection!");
static const u8 sSpeech_Roark_Lose1[] = _("Whoa! You cracked right through me!");
static const u8 sSpeech_Roark_Lose2[] = _("Guess I need to dig even deeper now!");
static const u8 sSpeech_Roark_Lose3[] = _("That's a fossil-worthy battle, honestly!");
static const u8 sSpeech_Roark_Lose4[] = _("My dad's going to hear about this one!");
static const u8 sSpeech_Roark_Lose5[] = _("Well fought! You've earned my respect!");

static const u8 sSpeech_Gardenia_Before1[] = _("I'm Gardenia, Eterna's Gym Leader!");
static const u8 sSpeech_Gardenia_Before2[] = _("My Grass types are full of life and energy!");
static const u8 sSpeech_Gardenia_Before3[] = _("I love a battle that gets my heart racing!");
static const u8 sSpeech_Gardenia_Before4[] = _("Let's have some real fun out here!");
static const u8 sSpeech_Gardenia_Before5[] = _("I hope you're as pumped as I am!");
static const u8 sSpeech_Gardenia_Win1[] = _("Yes! That's what I call a battle!");
static const u8 sSpeech_Gardenia_Win2[] = _("My Pokemon bloomed beautifully today!");
static const u8 sSpeech_Gardenia_Win3[] = _("Come back when you're ready for round two!");
static const u8 sSpeech_Gardenia_Win4[] = _("That was so much fun, thank you!");
static const u8 sSpeech_Gardenia_Win5[] = _("Nature always finds a way to win!");
static const u8 sSpeech_Gardenia_Lose1[] = _("Whoa, that was amazing! You got me!");
static const u8 sSpeech_Gardenia_Lose2[] = _("I haven't had this much fun in ages!");
static const u8 sSpeech_Gardenia_Lose3[] = _("You and your Pokemon are incredible!");
static const u8 sSpeech_Gardenia_Lose4[] = _("I need to train harder, clearly!");
static const u8 sSpeech_Gardenia_Lose5[] = _("What a rush! Let's battle again sometime!");

static const u8 sSpeech_Maylene_Before1[] = _("I'm Maylene, the Veilstone Gym Leader.");
static const u8 sSpeech_Maylene_Before2[] = _("I train hard so I don't have to rely on words.");
static const u8 sSpeech_Maylene_Before3[] = _("My Fighting types speak for themselves.");
static const u8 sSpeech_Maylene_Before4[] = _("I'll give this battle everything I have.");
static const u8 sSpeech_Maylene_Before5[] = _("Please, show me your resolve.");
static const u8 sSpeech_Maylene_Win1[] = _("My training paid off, it seems.");
static const u8 sSpeech_Maylene_Win2[] = _("A disciplined effort earns a win.");
static const u8 sSpeech_Maylene_Win3[] = _("Thank you for the good battle.");
static const u8 sSpeech_Maylene_Win4[] = _("I still have much more to learn myself.");
static const u8 sSpeech_Maylene_Win5[] = _("Your Pokemon fought bravely, too.");
static const u8 sSpeech_Maylene_Lose1[] = _("I... I wasn't strong enough this time.");
static const u8 sSpeech_Maylene_Lose2[] = _("Your resolve was stronger than mine.");
static const u8 sSpeech_Maylene_Lose3[] = _("I'll train even harder from here.");
static const u8 sSpeech_Maylene_Lose4[] = _("A humbling, honest defeat.");
static const u8 sSpeech_Maylene_Lose5[] = _("Thank you for showing me my limits.");

static const u8 sSpeech_CrasherWake_Before1[] = _("The name's Crasher Wake, Pastoria's Leader!");
static const u8 sSpeech_CrasherWake_Before2[] = _("Get ready for a splash of Water power!");
static const u8 sSpeech_CrasherWake_Before3[] = _("I'll crash right through your defenses!");
static const u8 sSpeech_CrasherWake_Before4[] = _("Let's make some waves out here, buddy!");
static const u8 sSpeech_CrasherWake_Before5[] = _("Time to dive into an awesome battle!");
static const u8 sSpeech_CrasherWake_Win1[] = _("Crash! Another wave of victory!");
static const u8 sSpeech_CrasherWake_Win2[] = _("That's the splash of a champion, buddy!");
static const u8 sSpeech_CrasherWake_Win3[] = _("Come back and ride with me again!");
static const u8 sSpeech_CrasherWake_Win4[] = _("Told you I'd crash right through!");
static const u8 sSpeech_CrasherWake_Win5[] = _("Another glorious splash of a win!");
static const u8 sSpeech_CrasherWake_Lose1[] = _("Whoa! Wiped out by that one, buddy!");
static const u8 sSpeech_CrasherWake_Lose2[] = _("You made some real waves out there!");
static const u8 sSpeech_CrasherWake_Lose3[] = _("Crashed and burned, ha! Nice battling!");
static const u8 sSpeech_CrasherWake_Lose4[] = _("That's the kind of splash I love to see!");
static const u8 sSpeech_CrasherWake_Lose5[] = _("Guess I'll dive back into training!");

static const u8 sSpeech_Fantina_Before1[] = _("I am Fantina, ze Gym Leader of Hearthome!");
static const u8 sSpeech_Fantina_Before2[] = _("My Ghost types perform a magnifique show!");
static const u8 sSpeech_Fantina_Before3[] = _("Prepare for a battle most dramatique!");
static const u8 sSpeech_Fantina_Before4[] = _("Ohh, I am so excited for zis battle!");
static const u8 sSpeech_Fantina_Before5[] = _("Let us dazzle each other, oui?");
static const u8 sSpeech_Fantina_Win1[] = _("Magnifique! A performance for ze ages!");
static const u8 sSpeech_Fantina_Win2[] = _("My ghosts haunted you quite well, non?");
static const u8 sSpeech_Fantina_Win3[] = _("Ohh, what a dramatique victory!");
static const u8 sSpeech_Fantina_Win4[] = _("Ze spirits favor me today, it seems!");
static const u8 sSpeech_Fantina_Win5[] = _("Bravo to myself, if I do say so!");
static const u8 sSpeech_Fantina_Lose1[] = _("Non! Zis cannot be ze ending!");
static const u8 sSpeech_Fantina_Lose2[] = _("Quel dommage! But quite ze performance!");
static const u8 sSpeech_Fantina_Lose3[] = _("You have stolen ze spotlight from me!");
static const u8 sSpeech_Fantina_Lose4[] = _("Magnifique battling, truly magnifique!");
static const u8 sSpeech_Fantina_Lose5[] = _("Ohh, I must applaud such a performance!");

static const u8 sSpeech_Byron_Before1[] = _("I am Byron, the Canalave Gym Leader.");
static const u8 sSpeech_Byron_Before2[] = _("My Steel types are forged strong as iron.");
static const u8 sSpeech_Byron_Before3[] = _("A true man never bends under pressure.");
static const u8 sSpeech_Byron_Before4[] = _("Show me the resolve of steel itself.");
static const u8 sSpeech_Byron_Before5[] = _("Let us forge a battle worth remembering.");
static const u8 sSpeech_Byron_Win1[] = _("Unbending, unyielding, victorious.");
static const u8 sSpeech_Byron_Win2[] = _("That is the strength of tempered steel.");
static const u8 sSpeech_Byron_Win3[] = _("A father must set a strong example.");
static const u8 sSpeech_Byron_Win4[] = _("Solid as iron, that victory was.");
static const u8 sSpeech_Byron_Win5[] = _("You'll need to forge yourself anew.");
static const u8 sSpeech_Byron_Lose1[] = _("Even iron can be bent, it seems.");
static const u8 sSpeech_Byron_Lose2[] = _("A fine battle. My son would be proud.");
static const u8 sSpeech_Byron_Lose3[] = _("You've tempered a real strength there.");
static const u8 sSpeech_Byron_Lose4[] = _("Unyielding resolve. I respect that.");
static const u8 sSpeech_Byron_Lose5[] = _("A defeat as solid as any victory.");

static const u8 sSpeech_Candice_Before1[] = _("I'm Candice, the Snowpoint Gym Leader!");
static const u8 sSpeech_Candice_Before2[] = _("My Ice types are as sharp as they are cute!");
static const u8 sSpeech_Candice_Before3[] = _("Fashion, battling, I'm great at both!");
static const u8 sSpeech_Candice_Before4[] = _("Let's turn up the chill factor, shall we?");
static const u8 sSpeech_Candice_Before5[] = _("I've been waiting for a challenge like you!");
static const u8 sSpeech_Candice_Win1[] = _("Ice cold and totally on point!");
static const u8 sSpeech_Candice_Win2[] = _("That's how you battle in style!");
static const u8 sSpeech_Candice_Win3[] = _("Chill out, there's always next time!");
static const u8 sSpeech_Candice_Win4[] = _("A win as sharp as an icicle!");
static const u8 sSpeech_Candice_Win5[] = _("Snowpoint's finest, right here!");
static const u8 sSpeech_Candice_Lose1[] = _("Whoa, you melted my cool right off!");
static const u8 sSpeech_Candice_Lose2[] = _("Okay, that was seriously impressive!");
static const u8 sSpeech_Candice_Lose3[] = _("You've got some serious style yourself!");
static const u8 sSpeech_Candice_Lose4[] = _("Guess I need to train a bit more, huh?");
static const u8 sSpeech_Candice_Lose5[] = _("Totally worth the loss, that was fun!");

static const u8 sSpeech_Volkner_Before1[] = _("I'm Volkner, the Sunyshore Gym Leader.");
static const u8 sSpeech_Volkner_Before2[] = _("Honestly, strong challengers are rare these days.");
static const u8 sSpeech_Volkner_Before3[] = _("Let's see if you can actually excite me.");
static const u8 sSpeech_Volkner_Before4[] = _("My Electric types haven't lost their spark.");
static const u8 sSpeech_Volkner_Before5[] = _("Show me something worth my time.");
static const u8 sSpeech_Volkner_Win1[] = _("Still not quite what I was hoping for.");
static const u8 sSpeech_Volkner_Win2[] = _("An easy win. How disappointing.");
static const u8 sSpeech_Volkner_Win3[] = _("Come back when you're actually a challenge.");
static const u8 sSpeech_Volkner_Win4[] = _("My spark hasn't faded one bit.");
static const u8 sSpeech_Volkner_Win5[] = _("Predictable, but a win's a win.");
static const u8 sSpeech_Volkner_Lose1[] = _("Now THAT'S what I've been waiting for!");
static const u8 sSpeech_Volkner_Lose2[] = _("Finally, a battle worth remembering!");
static const u8 sSpeech_Volkner_Lose3[] = _("You've reignited my passion for battling.");
static const u8 sSpeech_Volkner_Lose4[] = _("A genuinely electrifying defeat, that was.");
static const u8 sSpeech_Volkner_Lose5[] = _("Thank you. I needed a battle like that.");

struct FrontierSpeechPool
{
    const u8 *const *before;
    u8 beforeCount;
    const u8 *const *win;
    u8 winCount;
    const u8 *const *lose;
    u8 loseCount;
};

#define SPEECH_POOL(name) \
{                                                                          \
    .before = (const u8 *const[]){sSpeech_##name##_Before1, sSpeech_##name##_Before2, sSpeech_##name##_Before3, sSpeech_##name##_Before4, sSpeech_##name##_Before5}, \
    .beforeCount = 5,                                                     \
    .win = (const u8 *const[]){sSpeech_##name##_Win1, sSpeech_##name##_Win2, sSpeech_##name##_Win3, sSpeech_##name##_Win4, sSpeech_##name##_Win5}, \
    .winCount = 5,                                                        \
    .lose = (const u8 *const[]){sSpeech_##name##_Lose1, sSpeech_##name##_Lose2, sSpeech_##name##_Lose3, sSpeech_##name##_Lose4, sSpeech_##name##_Lose5}, \
    .loseCount = 5,                                                       \
}

static const struct FrontierSpeechPool sFrontierSpeechPools[FRONTIER_SPEECH_ARCHETYPES_COUNT] =
{
    [FRONTIER_SPEECH_DEFAULT]      = SPEECH_POOL(CheerfulKid),
    [FRONTIER_SPEECH_COCKY]        = SPEECH_POOL(Cocky),
    [FRONTIER_SPEECH_POLITE]       = SPEECH_POOL(Polite),
    [FRONTIER_SPEECH_CHEERFUL_KID] = SPEECH_POOL(CheerfulKid),
    [FRONTIER_SPEECH_OUTDOORSY]    = SPEECH_POOL(Outdoorsy),
    [FRONTIER_SPEECH_EARTHY]       = SPEECH_POOL(Earthy),
    [FRONTIER_SPEECH_SPORTY]       = SPEECH_POOL(Sporty),
    [FRONTIER_SPEECH_MYSTIC]       = SPEECH_POOL(Mystic),
    [FRONTIER_SPEECH_ARTSY]        = SPEECH_POOL(Artsy),
    [FRONTIER_SPEECH_CARING]       = SPEECH_POOL(Caring),
    [FRONTIER_SPEECH_BOLD_FLYER]   = SPEECH_POOL(BoldFlyer),
    [FRONTIER_SPEECH_BROCK]        = SPEECH_POOL(Brock),
    [FRONTIER_SPEECH_MISTY]        = SPEECH_POOL(Misty),
    [FRONTIER_SPEECH_LT_SURGE]     = SPEECH_POOL(LtSurge),
    [FRONTIER_SPEECH_ERIKA]        = SPEECH_POOL(Erika),
    [FRONTIER_SPEECH_KOGA]         = SPEECH_POOL(Koga),
    [FRONTIER_SPEECH_SABRINA]      = SPEECH_POOL(Sabrina),
    [FRONTIER_SPEECH_ROXANNE]      = SPEECH_POOL(Roxanne),
    [FRONTIER_SPEECH_BRAWLY]       = SPEECH_POOL(Brawly),
    [FRONTIER_SPEECH_WATTSON]      = SPEECH_POOL(Wattson),
    [FRONTIER_SPEECH_FLANNERY]     = SPEECH_POOL(Flannery),
    [FRONTIER_SPEECH_NORMAN]       = SPEECH_POOL(Norman),
    [FRONTIER_SPEECH_WINONA]       = SPEECH_POOL(Winona),
    [FRONTIER_SPEECH_JUAN]         = SPEECH_POOL(Juan),
    [FRONTIER_SPEECH_LORELEI]      = SPEECH_POOL(Lorelei),
    [FRONTIER_SPEECH_BRUNO]        = SPEECH_POOL(Bruno),
    [FRONTIER_SPEECH_AGATHA]       = SPEECH_POOL(Agatha),
    [FRONTIER_SPEECH_LANCE]        = SPEECH_POOL(Lance),
    [FRONTIER_SPEECH_ROARK]        = SPEECH_POOL(Roark),
    [FRONTIER_SPEECH_GARDENIA]     = SPEECH_POOL(Gardenia),
    [FRONTIER_SPEECH_MAYLENE]      = SPEECH_POOL(Maylene),
    [FRONTIER_SPEECH_CRASHER_WAKE] = SPEECH_POOL(CrasherWake),
    [FRONTIER_SPEECH_FANTINA]      = SPEECH_POOL(Fantina),
    [FRONTIER_SPEECH_BYRON]        = SPEECH_POOL(Byron),
    [FRONTIER_SPEECH_CANDICE]      = SPEECH_POOL(Candice),
    [FRONTIER_SPEECH_VOLKNER]      = SPEECH_POOL(Volkner),
};

#undef SPEECH_POOL

// Maps each Frontier-facing facility class to a tone archetype above.
// Similar classes deliberately share an archetype (see constants/frontier_speech.h).
// A facility class not listed here falls back to FRONTIER_SPEECH_DEFAULT.
static const u8 sFacilityClassToSpeechArchetype[FACILITY_CLASSES_COUNT] =
{
    [FACILITY_CLASS_COOLTRAINER_M]          = FRONTIER_SPEECH_COCKY,
    [FACILITY_CLASS_COOLTRAINER_F]          = FRONTIER_SPEECH_COCKY,
    [FACILITY_CLASS_EXPERT_M]               = FRONTIER_SPEECH_COCKY,
    [FACILITY_CLASS_EXPERT_F]               = FRONTIER_SPEECH_COCKY,
    [FACILITY_CLASS_BLACK_BELT]             = FRONTIER_SPEECH_COCKY,
    [FACILITY_CLASS_BATTLE_GIRL]            = FRONTIER_SPEECH_COCKY,
    [FACILITY_CLASS_DRAGON_TAMER]           = FRONTIER_SPEECH_COCKY,
    [FACILITY_CLASS_RICH_BOY]               = FRONTIER_SPEECH_COCKY,

    [FACILITY_CLASS_GENTLEMAN]              = FRONTIER_SPEECH_POLITE,
    [FACILITY_CLASS_LADY]                   = FRONTIER_SPEECH_POLITE,
    [FACILITY_CLASS_BEAUTY]                 = FRONTIER_SPEECH_POLITE,
    [FACILITY_CLASS_POKEFAN_M]              = FRONTIER_SPEECH_POLITE,
    [FACILITY_CLASS_POKEFAN_F]              = FRONTIER_SPEECH_POLITE,

    [FACILITY_CLASS_YOUNGSTER]              = FRONTIER_SPEECH_CHEERFUL_KID,
    [FACILITY_CLASS_LASS]                   = FRONTIER_SPEECH_CHEERFUL_KID,
    [FACILITY_CLASS_SCHOOL_KID_M]           = FRONTIER_SPEECH_CHEERFUL_KID,
    [FACILITY_CLASS_SCHOOL_KID_F]           = FRONTIER_SPEECH_CHEERFUL_KID,
    [FACILITY_CLASS_NINJA_BOY]              = FRONTIER_SPEECH_CHEERFUL_KID,

    [FACILITY_CLASS_CAMPER]                 = FRONTIER_SPEECH_OUTDOORSY,
    [FACILITY_CLASS_PICNICKER]              = FRONTIER_SPEECH_OUTDOORSY,
    [FACILITY_CLASS_TUBER_M]                = FRONTIER_SPEECH_OUTDOORSY,
    [FACILITY_CLASS_TUBER_F]                = FRONTIER_SPEECH_OUTDOORSY,

    [FACILITY_CLASS_HIKER]                  = FRONTIER_SPEECH_EARTHY,
    [FACILITY_CLASS_RUIN_MANIAC]            = FRONTIER_SPEECH_EARTHY,
    [FACILITY_CLASS_POKEMANIAC]             = FRONTIER_SPEECH_EARTHY,
    [FACILITY_CLASS_FISHERMAN]              = FRONTIER_SPEECH_EARTHY,
    [FACILITY_CLASS_BUG_CATCHER]            = FRONTIER_SPEECH_EARTHY,
    [FACILITY_CLASS_BUG_MANIAC]             = FRONTIER_SPEECH_EARTHY,
    [FACILITY_CLASS_COLLECTOR]              = FRONTIER_SPEECH_EARTHY,

    [FACILITY_CLASS_RUNNING_TRIATHLETE_M]   = FRONTIER_SPEECH_SPORTY,
    [FACILITY_CLASS_RUNNING_TRIATHLETE_F]   = FRONTIER_SPEECH_SPORTY,
    [FACILITY_CLASS_CYCLING_TRIATHLETE_M]   = FRONTIER_SPEECH_SPORTY,
    [FACILITY_CLASS_CYCLING_TRIATHLETE_F]   = FRONTIER_SPEECH_SPORTY,
    [FACILITY_CLASS_SWIMMING_TRIATHLETE_M]  = FRONTIER_SPEECH_SPORTY,
    [FACILITY_CLASS_SWIMMING_TRIATHLETE_F]  = FRONTIER_SPEECH_SPORTY,
    [FACILITY_CLASS_SWIMMER_M]              = FRONTIER_SPEECH_SPORTY,
    [FACILITY_CLASS_SWIMMER_F]              = FRONTIER_SPEECH_SPORTY,
    [FACILITY_CLASS_SAILOR]                 = FRONTIER_SPEECH_SPORTY,

    [FACILITY_CLASS_PSYCHIC_M]              = FRONTIER_SPEECH_MYSTIC,
    [FACILITY_CLASS_PSYCHIC_F]              = FRONTIER_SPEECH_MYSTIC,
    [FACILITY_CLASS_HEX_MANIAC]             = FRONTIER_SPEECH_MYSTIC,

    [FACILITY_CLASS_GUITARIST]              = FRONTIER_SPEECH_ARTSY,
    [FACILITY_CLASS_KINDLER]                = FRONTIER_SPEECH_ARTSY,
    [FACILITY_CLASS_AROMA_LADY]             = FRONTIER_SPEECH_ARTSY,
    [FACILITY_CLASS_PARASOL_LADY]           = FRONTIER_SPEECH_ARTSY,

    [FACILITY_CLASS_PKMN_BREEDER_M]         = FRONTIER_SPEECH_CARING,
    [FACILITY_CLASS_PKMN_BREEDER_F]         = FRONTIER_SPEECH_CARING,
    [FACILITY_CLASS_PKMN_RANGER_M]          = FRONTIER_SPEECH_CARING,
    [FACILITY_CLASS_PKMN_RANGER_F]          = FRONTIER_SPEECH_CARING,

    [FACILITY_CLASS_BIRD_KEEPER]            = FRONTIER_SPEECH_BOLD_FLYER,

    [FACILITY_CLASS_LEADER_BROCK]           = FRONTIER_SPEECH_BROCK,
    [FACILITY_CLASS_LEADER_MISTY]           = FRONTIER_SPEECH_MISTY,
    [FACILITY_CLASS_LEADER_LT_SURGE]        = FRONTIER_SPEECH_LT_SURGE,
    [FACILITY_CLASS_LEADER_ERIKA]           = FRONTIER_SPEECH_ERIKA,
    [FACILITY_CLASS_LEADER_KOGA]            = FRONTIER_SPEECH_KOGA,
    [FACILITY_CLASS_LEADER_SABRINA]         = FRONTIER_SPEECH_SABRINA,
    [FACILITY_CLASS_LEADER_ROXANNE]         = FRONTIER_SPEECH_ROXANNE,
    [FACILITY_CLASS_LEADER_BRAWLY]          = FRONTIER_SPEECH_BRAWLY,
    [FACILITY_CLASS_LEADER_WATTSON]         = FRONTIER_SPEECH_WATTSON,
    [FACILITY_CLASS_LEADER_FLANNERY]        = FRONTIER_SPEECH_FLANNERY,
    [FACILITY_CLASS_LEADER_NORMAN]          = FRONTIER_SPEECH_NORMAN,
    [FACILITY_CLASS_LEADER_WINONA]          = FRONTIER_SPEECH_WINONA,
    [FACILITY_CLASS_LEADER_JUAN]            = FRONTIER_SPEECH_JUAN,

    [FACILITY_CLASS_LEADER_LORELEI]         = FRONTIER_SPEECH_LORELEI,
    [FACILITY_CLASS_LEADER_BRUNO]           = FRONTIER_SPEECH_BRUNO,
    [FACILITY_CLASS_LEADER_AGATHA]          = FRONTIER_SPEECH_AGATHA,
    [FACILITY_CLASS_LEADER_LANCE]           = FRONTIER_SPEECH_LANCE,

    [FACILITY_CLASS_LEADER_ROARK]           = FRONTIER_SPEECH_ROARK,
    [FACILITY_CLASS_LEADER_GARDENIA]        = FRONTIER_SPEECH_GARDENIA,
    [FACILITY_CLASS_LEADER_MAYLENE]         = FRONTIER_SPEECH_MAYLENE,
    [FACILITY_CLASS_LEADER_CRASHER_WAKE]    = FRONTIER_SPEECH_CRASHER_WAKE,
    [FACILITY_CLASS_LEADER_FANTINA]         = FRONTIER_SPEECH_FANTINA,
    [FACILITY_CLASS_LEADER_BYRON]           = FRONTIER_SPEECH_BYRON,
    [FACILITY_CLASS_LEADER_CANDICE]         = FRONTIER_SPEECH_CANDICE,
    [FACILITY_CLASS_LEADER_VOLKNER]         = FRONTIER_SPEECH_VOLKNER,
};
