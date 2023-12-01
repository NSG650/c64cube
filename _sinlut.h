#define SINLUT_ENTRIES 512
int32_t sinlut[SINLUT_ENTRIES] = {0,804,1608,2412,3215,4018,4821,5622,6423,7223,8022,8819,9616,10410,11204,11995,12785,13573,14359,15142,15923,16702,17479,18253,19024,19792,20557,21319,22078,22833,23586,24334,25079,25820,26557,27291,28020,28745,29465,30181,30893,31600,32302,32999,33692,34379,35061,35738,36409,37075,37736,38390,39039,39682,40319,40950,41575,42194,42806,43412,44011,44603,45189,45768,46340,46906,47464,48015,48558,49095,49624,50146,50660,51166,51665,52155,52639,53114,53581,54040,54491,54933,55368,55794,56212,56621,57022,57414,57797,58172,58538,58895,59243,59583,59913,60235,60547,60850,61144,61429,61705,61971,62228,62475,62714,62942,63162,63371,63571,63762,63943,64115,64276,64428,64571,64703,64826,64939,65043,65136,65220,65294,65358,65412,65457,65491,65516,65531,65536,65531,65516,65491,65457,65412,65358,65294,65220,65136,65043,64939,64826,64703,64571,64428,64276,64115,63943,63762,63571,63371,63162,62942,62714,62475,62228,61971,61705,61429,61144,60850,60547,60235,59913,59583,59243,58895,58538,58172,57797,57414,57022,56621,56212,55794,55368,54933,54491,54040,53581,53114,52639,52155,51665,51166,50660,50146,49624,49095,48558,48015,47464,46906,46340,45768,45189,44603,44011,43412,42806,42194,41575,40950,40319,39682,39039,38390,37736,37075,36409,35738,35061,34379,33692,32999,32302,31600,30893,30181,29465,28745,28020,27291,26557,25820,25079,24334,23586,22833,22078,21319,20557,19792,19024,18253,17479,16702,15923,15142,14359,13573,12785,11995,11204,10410,9616,8819,8022,7223,6423,5622,4821,4018,3215,2412,1608,804,0,-804,-1608,-2412,-3215,-4018,-4821,-5622,-6423,-7223,-8022,-8819,-9616,-10410,-11204,-11995,-12785,-13573,-14359,-15142,-15923,-16702,-17479,-18253,-19024,-19792,-20557,-21319,-22078,-22833,-23586,-24334,-25079,-25820,-26557,-27291,-28020,-28745,-29465,-30181,-30893,-31600,-32302,-32999,-33692,-34379,-35061,-35738,-36409,-37075,-37736,-38390,-39039,-39682,-40319,-40950,-41575,-42194,-42806,-43412,-44011,-44603,-45189,-45768,-46340,-46906,-47464,-48015,-48558,-49095,-49624,-50146,-50660,-51166,-51665,-52155,-52639,-53114,-53581,-54040,-54491,-54933,-55368,-55794,-56212,-56621,-57022,-57414,-57797,-58172,-58538,-58895,-59243,-59583,-59913,-60235,-60547,-60850,-61144,-61429,-61705,-61971,-62228,-62475,-62714,-62942,-63162,-63371,-63571,-63762,-63943,-64115,-64276,-64428,-64571,-64703,-64826,-64939,-65043,-65136,-65220,-65294,-65358,-65412,-65457,-65491,-65516,-65531,-65536,-65531,-65516,-65491,-65457,-65412,-65358,-65294,-65220,-65136,-65043,-64939,-64826,-64703,-64571,-64428,-64276,-64115,-63943,-63762,-63571,-63371,-63162,-62942,-62714,-62475,-62228,-61971,-61705,-61429,-61144,-60850,-60547,-60235,-59913,-59583,-59243,-58895,-58538,-58172,-57797,-57414,-57022,-56621,-56212,-55794,-55368,-54933,-54491,-54040,-53581,-53114,-52639,-52155,-51665,-51166,-50660,-50146,-49624,-49095,-48558,-48015,-47464,-46906,-46340,-45768,-45189,-44603,-44011,-43412,-42806,-42194,-41575,-40950,-40319,-39682,-39039,-38390,-37736,-37075,-36409,-35738,-35061,-34379,-33692,-32999,-32302,-31600,-30893,-30181,-29465,-28745,-28020,-27291,-26557,-25820,-25079,-24334,-23586,-22833,-22078,-21319,-20557,-19792,-19024,-18253,-17479,-16702,-15923,-15142,-14359,-13573,-12785,-11995,-11204,-10410,-9616,-8819,-8022,-7223,-6423,-5622,-4821,-4018,-3215,-2412,-1608,-804,};
int32_t coslut[SINLUT_ENTRIES] = {65536,65531,65516,65491,65457,65412,65358,65294,65220,65136,65043,64939,64826,64703,64571,64428,64276,64115,63943,63762,63571,63371,63162,62942,62714,62475,62228,61971,61705,61429,61144,60850,60547,60235,59913,59583,59243,58895,58538,58172,57797,57414,57022,56621,56212,55794,55368,54933,54491,54040,53581,53114,52639,52155,51665,51166,50660,50146,49624,49095,48558,48015,47464,46906,46340,45768,45189,44603,44011,43412,42806,42194,41575,40950,40319,39682,39039,38390,37736,37075,36409,35738,35061,34379,33692,32999,32302,31600,30893,30181,29465,28745,28020,27291,26557,25820,25079,24334,23586,22833,22078,21319,20557,19792,19024,18253,17479,16702,15923,15142,14359,13573,12785,11995,11204,10410,9616,8819,8022,7223,6423,5622,4821,4018,3215,2412,1608,804,0,-804,-1608,-2412,-3215,-4018,-4821,-5622,-6423,-7223,-8022,-8819,-9616,-10410,-11204,-11995,-12785,-13573,-14359,-15142,-15923,-16702,-17479,-18253,-19024,-19792,-20557,-21319,-22078,-22833,-23586,-24334,-25079,-25820,-26557,-27291,-28020,-28745,-29465,-30181,-30893,-31600,-32302,-32999,-33692,-34379,-35061,-35738,-36409,-37075,-37736,-38390,-39039,-39682,-40319,-40950,-41575,-42194,-42806,-43412,-44011,-44603,-45189,-45768,-46340,-46906,-47464,-48015,-48558,-49095,-49624,-50146,-50660,-51166,-51665,-52155,-52639,-53114,-53581,-54040,-54491,-54933,-55368,-55794,-56212,-56621,-57022,-57414,-57797,-58172,-58538,-58895,-59243,-59583,-59913,-60235,-60547,-60850,-61144,-61429,-61705,-61971,-62228,-62475,-62714,-62942,-63162,-63371,-63571,-63762,-63943,-64115,-64276,-64428,-64571,-64703,-64826,-64939,-65043,-65136,-65220,-65294,-65358,-65412,-65457,-65491,-65516,-65531,-65536,-65531,-65516,-65491,-65457,-65412,-65358,-65294,-65220,-65136,-65043,-64939,-64826,-64703,-64571,-64428,-64276,-64115,-63943,-63762,-63571,-63371,-63162,-62942,-62714,-62475,-62228,-61971,-61705,-61429,-61144,-60850,-60547,-60235,-59913,-59583,-59243,-58895,-58538,-58172,-57797,-57414,-57022,-56621,-56212,-55794,-55368,-54933,-54491,-54040,-53581,-53114,-52639,-52155,-51665,-51166,-50660,-50146,-49624,-49095,-48558,-48015,-47464,-46906,-46340,-45768,-45189,-44603,-44011,-43412,-42806,-42194,-41575,-40950,-40319,-39682,-39039,-38390,-37736,-37075,-36409,-35738,-35061,-34379,-33692,-32999,-32302,-31600,-30893,-30181,-29465,-28745,-28020,-27291,-26557,-25820,-25079,-24334,-23586,-22833,-22078,-21319,-20557,-19792,-19024,-18253,-17479,-16702,-15923,-15142,-14359,-13573,-12785,-11995,-11204,-10410,-9616,-8819,-8022,-7223,-6423,-5622,-4821,-4018,-3215,-2412,-1608,-804,0,804,1608,2412,3215,4018,4821,5622,6423,7223,8022,8819,9616,10410,11204,11995,12785,13573,14359,15142,15923,16702,17479,18253,19024,19792,20557,21319,22078,22833,23586,24334,25079,25820,26557,27291,28020,28745,29465,30181,30893,31600,32302,32999,33692,34379,35061,35738,36409,37075,37736,38390,39039,39682,40319,40950,41575,42194,42806,43412,44011,44603,45189,45768,46340,46906,47464,48015,48558,49095,49624,50146,50660,51166,51665,52155,52639,53114,53581,54040,54491,54933,55368,55794,56212,56621,57022,57414,57797,58172,58538,58895,59243,59583,59913,60235,60547,60850,61144,61429,61705,61971,62228,62475,62714,62942,63162,63371,63571,63762,63943,64115,64276,64428,64571,64703,64826,64939,65043,65136,65220,65294,65358,65412,65457,65491,65516,65531,};