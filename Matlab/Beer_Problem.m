% Beer_Problem
prob = [];
for t = 1:15
beer_price = 350;
lambda = 5;
N = 100;
beer = zeros(N,1);
    for i = 1:N
        n = poissrnd(lambda*t);
        if n > 0
            coins = zeros(n,1);
            for j = 1:n
                U = rand;
                if U > 0 && U <= 0.4
                    coins(j,1) = 5;
                elseif U > 0.4 && U <= 0.8
                    coins(j,1) = 10;
                else
                    coins(j,1) = 20;
                end
            end
        end
    if sum(coins) >= beer_price
        beer(i,1) = 1;
    else
        beer(i,1) = 0;
    end
    end
    l_hat = mean(beer);
    relErr_hat = std(beer) / (l_hat * sqrt(N));
    prob(t) = l_hat;
end
plot(prob)





