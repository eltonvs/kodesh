scanf("%i %i", &atle.v1_min, &atle.v1_seg);
scanf("%i %i", &atle.v2_min, &atle.v2_seg);
scanf("%i %i", &atle.v3_min, &atle.v3_seg);

atle.vel1 = 300.00/(atle.v1_min*60 + atle.v1_seg);
atle.vel2 = 300.00/(atle.v2_min*60 + atle.v2_seg);
atle.vel3 = 300.00/(atle.v3_min*60 + atle.v3_seg);
atle.vel_final = 900.00/(atle.v1_min*60 + atle.v1_seg + atle.v2_min*60 + atle.v2_seg + atle.v3_min*60 + atle.v3_seg);
atle.tot_min = atle.v1_min + atle.v2_min + atle.v3_min;
atle.tot_seg = atle.v1_seg + atle.v2_seg + atle.v3_seg;
atle.tot_min += atle.tot_seg/60;
atle.tot_seg %= 60;
